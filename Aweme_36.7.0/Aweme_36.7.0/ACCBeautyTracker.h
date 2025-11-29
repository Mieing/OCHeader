@interface ACCBeautyTracker : NSObject

+ (id)p_generateBaseParamsDictWithPublishModel:(id)a0;
+ (void)trackBeautifyLoadingFinish:(id)a0 enterFrom:(id)a1 duration:(double)a2;
+ (void)trackClickBeautifyEntrance:(id)a0 isBeautyOn:(BOOL)a1;
+ (void)trackShowBeautifyEntrance:(id)a0 isBeautyOn:(BOOL)a1;
+ (void)trackClickBeautifySwitch:(id)a0 isBeautyOnBeforeClickButton:(BOOL)a1 buttonType:(id)a2;
+ (void)trackShowBeautifyPanel:(id)a0 isBeautyOn:(BOOL)a1;
+ (void)trackExitBeautifyPanel:(id)a0 isBeautyChanged:(BOOL)a1 beautifyNamesString:(id)a2;
+ (void)trackResetBeautifyAll:(id)a0;
+ (void)trackClientChangeABGroup:(id)a0 status:(long long)a1;
+ (void)trackResetBeautifyPopup:(id)a0 eventType:(id)a1;
+ (void)trackClickBeautifyTab:(id)a0 tabName:(id)a1 nodeId:(id)a2 nodeName:(id)a3 isCollection:(BOOL)a4;
+ (void)trackClickBeautifySubTab:(id)a0 tabName:(id)a1 parentNodeId:(id)a2 parentNodeName:(id)a3 nodeId:(id)a4 nodeName:(id)a5;
+ (void)trackAdjustBeautifyParam:(id)a0 parentNodeId:(id)a1 parentNodeName:(id)a2 nodeId:(id)a3 nodeName:(id)a4 value:(long long)a5 defaultValue:(long long)a6;

@end
