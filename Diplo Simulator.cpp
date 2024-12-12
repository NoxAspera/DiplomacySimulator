#include <iostream>
#include <map>
#include <string>
#include "./Provence.cpp"

using namespace std;

int main(int argc, char** argv)
{
    //a collection of provences and their immediate connections
    vector<provence> provences;
    vector<string> adjacent ({"MAO", "IRI", "CLY", "LVP"});
    provence newProvence = provence("NAO", adjacent, false, 's', 'n');
    provences.push_back(newProvence);
    adjacent = {"NAO", "MAO", "WAL", "LVP", "ENG"};
    newProvence = provence("IRI", adjacent, false, 's', 'n');
    provences.push_back(newProvence);
    adjacent = {"NAO", "SPA", "POR", "BRE", "ENG", "GAS", "WES", "NAF"};
    newProvence = provence("MAO", adjacent, false, 's', 'n');
    provences.push_back(newProvence);
    adjacent = {"MAO", "SPA"};
    newProvence = provence("POR", adjacent, true, 'c', 'n');
    provences.push_back(newProvence);
    adjacent = {"MAO", "POR", "MAR", "LYO", "GAS", "WES"};
    newProvence = provence("SPA", adjacent, true, 'd', 'n');
    provences.push_back(newProvence);
    adjacent = {"MAO", "WES", "TUN"};
    newProvence = provence("NAF", adjacent, false, 'c', 'n');
    provences.push_back(newProvence);
    adjacent = {"NAF", "WES", "TYS", "ION"};
    newProvence = provence("TUN", adjacent, true, 'c', 'n');
    provences.push_back(newProvence);
    adjacent = {"NAF", "TUN", "TYS", "LYO", "SPA"};
    newProvence = provence("WES", adjacent, false, 's', 'n');
    provences.push_back(newProvence);
    adjacent = {"WES", "SPA", "MAR", "TYS", "PIE", "TUS"};
    newProvence = provence("LYO", adjacent, false, 'c', 'n');
    provences.push_back(newProvence);
    adjacent = {"LYO", "SPA", "GAS", "BUR", "PIE"};
    newProvence = provence("MAR", adjacent, true, 'c', 'f');
    provences.push_back(newProvence);
    adjacent = {"MAO", "SPA", "MAR", "BRE", "BUR", "PAR"};
    newProvence = provence("GAS", adjacent, false, 'c', 'n');
    provences.push_back(newProvence);
    adjacent = {"MAO", "ENG", "PIC", "GAS", "PAR"};
    newProvence = provence("BRE", adjacent, true, 'c', 'f');
    provences.push_back(newProvence);
    adjacent = {"BRE", "PIC", "GAS", "BUR"};
    newProvence = provence("PAR", adjacent, true, 'l', 'f');
    provences.push_back(newProvence);
    adjacent = {"PAR", "ENG", "BEL", "BRE"};
    newProvence = provence("PIC", adjacent, false, 'c', 'n');
    provences.push_back(newProvence);
    adjacent = {"PAR", "MAR", "BEL", "RUH", "MUN", "GAS"};
    newProvence = provence("BUR", adjacent, false, 'l', 'n');
    provences.push_back(newProvence);
    adjacent = {"IRI", "ENG", "LIV", "YOR", "LON"};
    newProvence = provence("WAL", adjacent, false, 'c', 'n');
    provences.push_back(newProvence);
    adjacent = {"WAL", "ENG", "NTH", "YOR"};
    newProvence = provence("LON", adjacent, true, 'c', 'e');
    provences.push_back(newProvence);
    adjacent = {"LON", "NTH", "LIV", "WAL", "EDI"};
    newProvence = provence("YOR", adjacent, false, 'c', 'n');
    provences.push_back(newProvence);
    adjacent = {"NTH" "NWG", "CLY", "EDI", "YOR"};
    newProvence = provence("EDI", adjacent, true, 'c', 'e');
    provences.push_back(newProvence);
    adjacent = {"LIV", "NAO", "NWG", "EDI"};
    newProvence = provence("CLY", adjacent, false, 'c', 'n');
    provences.push_back(newProvence);
    adjacent = {"NAO", "IRI", "EDI", "YOR", "WAL", "CLY"};
    newProvence = provence("LIV", adjacent, true, 'c', 'e');
    provences.push_back(newProvence);
    adjacent = {"CLY", "EDI", "NAO", "NTH", "NWY", "BAR"};
    newProvence = provence("NWG", adjacent, false, 's', 'n');
    provences.push_back(newProvence);
    adjacent = {"LON", "YOR", "EDI", "NWG", "NWY", "SKA", "DEN", "GER", "HOL", "BEL"};
    newProvence = provence("NTH", adjacent, false, 's', 'n');
    provences.push_back(newProvence);
    adjacent = {"STP", "BAR", "NWG", "SKA", "NTH", "SWE", "FIN"};
    newProvence = provence("NWY", adjacent, true, 'c', 'n');
    provences.push_back(newProvence);
    adjacent = {"NWY", "SWE", "DEN", "NTH"};
    newProvence = provence("SKA", adjacent, false, 's', 'n');
    provences.push_back(newProvence);
    adjacent = {"SKA", "NTH", "GER", "SWE", "BAL", "KEL"};
    newProvence = provence("DEN", adjacent, true, 'c', 'n');
    provences.push_back(newProvence);
    adjacent = {"NTH", "HOL", "DEN", "KIE"};
    newProvence = provence("GER", adjacent, false, 's', 'n');
    provences.push_back(newProvence);
    adjacent = {"GER", "NTH", "BEL", "KIE", "RUH"};
    newProvence = provence("HOL", adjacent, true, 'c', 'n');
    provences.push_back(newProvence);
    adjacent = {"ENG", "HOL", "PIC", "RUH", "BUR", "NTH"};
    newProvence = provence("BEL", adjacent, true, 'c', 'n');
    provences.push_back(newProvence);
    adjacent = {"NTH", "HOL", "DEN", "KIE"};
    newProvence = provence("GER", adjacent, false, 's', 'n');
    provences.push_back(newProvence);
    adjacent = {"BEL", "HOL", "MUN", "KIE", "BUR"};
    newProvence = provence("RUH", adjacent, false, 'l', 'n');
    provences.push_back(newProvence);
    adjacent = {"GER", "HOL", "DEN", "BAL", "BER", "MUN"};
    newProvence = provence("KIE", adjacent, true, 'c', 'g');
    provences.push_back(newProvence);
    adjacent = {"RUH", "BUR", "BER", "KIE", "SIL", "BOH", "TYR"};
    newProvence = provence("MUN", adjacent, true, 'l', 'g');
    provences.push_back(newProvence);
    adjacent = {"BAL", "PRU", "SIL", "MUN", "KIE"};
    newProvence = provence("BER", adjacent, true, 'c', 'g');
    provences.push_back(newProvence);
    adjacent = {"MUN", "BER", "BOH", "PRU", "WAR", "GAL"};
    newProvence = provence("SIL", adjacent, false, 'l', 'n');
    provences.push_back(newProvence);
    adjacent = {"BAL", "LVN", "WAR", "SIL", "BER"};
    newProvence = provence("PRU", adjacent, false, 'c', 'n');
    provences.push_back(newProvence);
    adjacent = {"SWE", "DEN", "BER", "PRU", "LVN"};
    newProvence = provence("BAL", adjacent, false, 's', 'n');
    provences.push_back(newProvence);
    adjacent = {"BOT", "FIN", "NWY", "BAL", "SWE"};
    newProvence = provence("SWE", adjacent, true, 'c', 'n');
    provences.push_back(newProvence);
    adjacent = {"SIL", "MUN", "TYR", "VIE", "GAL"};
    newProvence = provence("BOH", adjacent, false, 'l', 'n');
    provences.push_back(newProvence);
    adjacent = {"BOH", "MUN", "VEN", "TRI", "VIE"};
    newProvence = provence("TYR", adjacent, false, 'l', 'n');
    provences.push_back(newProvence);
    adjacent = {"BUD", "VIE", "VEN", "TYR", "ADR", "ALB", "SER"};
    newProvence = provence("TRI", adjacent, true, 'c', 'a');
    provences.push_back(newProvence);
    adjacent = {"BUD", "GAL", "TYR", "TRI", "BOH"};
    newProvence = provence("VIE", adjacent, true, 'l', 'a');
    provences.push_back(newProvence);
    adjacent = {"SER", "RUM", "GAL", "VIE", "TYR"};
    newProvence = provence("BUG", adjacent, true, 'l', 'a');
    provences.push_back(newProvence);
    adjacent = {"WAR", "BUD", "RUM", "VIE", "UKR", "SIL", "BOH"};
    newProvence = provence("GAL", adjacent, false, 'l', 'n');
    provences.push_back(newProvence);
    adjacent = {"TYR", "TRI", "PIE", "TUS", "ROM", "APU", "ADR"};
    newProvence = provence("VEN", adjacent, true, 'c', 'i');
    provences.push_back(newProvence);
    adjacent = {"MAR", "VEN", "TUS", "LYO", "TYR"};
    newProvence = provence("PIE", adjacent, false, 'c', 'n');
    provences.push_back(newProvence);
    adjacent = {"ROM", "VEN", "TYS", "LYO", "PIE"};
    newProvence = provence("TUS", adjacent, false, 'c', 'n');
    provences.push_back(newProvence);
    adjacent = {"NAP", "VEN", "TUS", "APU", "TYR"};
    newProvence = provence("ROM", adjacent, true, 'c', 'i');
    provences.push_back(newProvence);
    adjacent = {"ROM", "APU", "ION", "TYS"};
    newProvence = provence("NAP", adjacent, true, 'c', 'i');
    provences.push_back(newProvence);
    adjacent = {"VEN", "TRI", "APU", "ION", "ALB"};
    newProvence = provence("ADR", adjacent, false, 's', 'n');
    provences.push_back(newProvence);
    adjacent = {"TUN", "TYS", "APU", "NAP", "ALB", "GRE", "AEG", "LEV", "ADR"};
    newProvence = provence("ION", adjacent, false, 's', 'n');
    provences.push_back(newProvence);
    adjacent = {"TUN", "TYS", "APU", "NAP", "ALB", "GRE", "AEG", "LEV", "ADR"};
    newProvence = provence("ION", adjacent, false, 's', 'n');
    provences.push_back(newProvence);
    adjacent = {"BUL", "CON", "SMY", "NAP", "GRE", "LEV", "ION"};
    newProvence = provence("AEG", adjacent, false, 's', 'n');
    provences.push_back(newProvence);
    adjacent = {"ION", "AEG", "SMY", "SYR"};
    newProvence = provence("LEV", adjacent, false, 's', 'n');
    provences.push_back(newProvence);
    adjacent = {"LEV", "ARM", "SMY"};
    newProvence = provence("SYR", adjacent, false, 'c', 'n');
    provences.push_back(newProvence);
    adjacent = {"LEV", "ARM", "AEG", "CON", "ANK", "ARM", "SYR"};
    newProvence = provence("SMY", adjacent, true, 'c', 't');
    provences.push_back(newProvence);
    adjacent = {"ALB", "SER", "AEG", "BUL", "ION"};
    newProvence = provence("GRE", adjacent, true, 'c', 'n');
    provences.push_back(newProvence);
    adjacent = {"TRI", "SER", "GRE", "ADR", "ION"};
    newProvence = provence("ALB", adjacent, false, 'c', 'n');
    provences.push_back(newProvence);
    adjacent = {"TRI", "ALB", "GRE", "RUM", "BUD","BUL"};
    newProvence = provence("SER", adjacent, true, 'l', 'n');
    provences.push_back(newProvence);
    adjacent = {"BUL", "SER", "BUD", "GAL", "UKR", "SEV", "BLA"};
    newProvence = provence("RUM", adjacent, true, 'c', 'n');
    provences.push_back(newProvence);
    adjacent = {"RUM", "SER", "GRE", "CON", "BUD", "BUL", "AEG"};
    newProvence = provence("BUL", adjacent, true, 'd', 'n');
    provences.push_back(newProvence);
    adjacent = {"SMY", "ANK", "BLA", "BUL", "AEG"};
    newProvence = provence("CON", adjacent, true, 'c', 't');
    provences.push_back(newProvence);
    adjacent = {"SMY", "CON", "BLA", "ARM"};
    newProvence = provence("ANK", adjacent, true, 'c', 't');
    provences.push_back(newProvence);
    adjacent = {"SMY", "ANK", "BLA", "SYR", "SEV"};
    newProvence = provence("ARM", adjacent, false, 'c', 'n');
    provences.push_back(newProvence);
    adjacent = {"ARM", "RUM", "BLA", "UKR", "MOS"};
    newProvence = provence("SEV", adjacent, true, 'c', 'r');
    provences.push_back(newProvence);
    adjacent = {"ARM", "RUM", "BUL", "CON", "SEV", "ANK"};
    newProvence = provence("BLA", adjacent, false, 's', 'n');
    provences.push_back(newProvence);
    adjacent = {"WAR", "RUM", "GAL", "MOS", "SEV"};
    newProvence = provence("UKR", adjacent, false, 'l', 'n');
    provences.push_back(newProvence);
    adjacent = {"PRU", "SIL", "GAL", "MOS", "UKR", "LVN"};
    newProvence = provence("WAR", adjacent, true, 'l', 'r');
    provences.push_back(newProvence);
    adjacent = {"UKR", "SEV", "WAR", "LVN", "STP"};
    newProvence = provence("MOS", adjacent, true, 'l', 'r');
    provences.push_back(newProvence);
    adjacent = {"PRU", "MOS", "WAR", "BOT", "STP", "BAL"};
    newProvence = provence("LVN", adjacent, false, 'c', 'n');
    provences.push_back(newProvence);
    adjacent = {"FIN", "BOT", "BAR", "LVN", "MOS", "NWY"};
    newProvence = provence("STP", adjacent, true, 'd', 'r');
    provences.push_back(newProvence);
    adjacent = {"STP", "NWY", "SWE", "BOT"};
    newProvence = provence("FIN", adjacent, false, 'c', 'n');
    provences.push_back(newProvence);

    int eng_count = 0;
    int rus_count = 0;
    int ger_count = 0;
    int tur_count = 0;
    int fra_count = 0;
    int ita_count = 0;
    int aus_count = 0;
    for(provence current: provences)
    {
        switch(current.get_owner())
        {
            case 'e':
            {
                eng_count ++;
                break;
            }
            case 'r':
            {
                rus_count++;
                break;
            }
            case 'g':
            {
                ger_count++;
                break;
            }
            case 't':
            {
                tur_count++;
            }
            case 'i':
            {
                ita_count++;
            }
            case 'f':
            {
                fra_count++;
            }
            case 'a':
            {
                aus_count++;
            }
        }
    }

};