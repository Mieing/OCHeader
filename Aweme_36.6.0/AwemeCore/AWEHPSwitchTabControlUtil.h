@interface AWEHPSwitchTabControlUtil : NSObject

+ (BOOL)allowSwitchTabWithCallerId:(id)a0 tabId:(id)a1 enterFrom:(id)a2 enterMethod:(id)a3 landingModel:(id)a4;
+ (void)trackSwitchTabWithCallerId:(id)a0 tabId:(id)a1 enterFrom:(id)a2 enterMethod:(id)a3 landingModel:(id)a4 interfaceName:(id)a5 isSuccess:(BOOL)a6 sendStack:(BOOL)a7;
+ (id)p_getSwitchTabControlModel;
+ (BOOL)p_checkBlackInfo:(id)a0 inMatchInfo:(id)a1;

@end
