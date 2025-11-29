@interface WCPayPocketMoneyMsgCenter : NSObject

+ (BOOL)handleClickSysMsg:(id)a0 chatterName:(id)a1 nodeViewDelegate:(id)a2;
+ (void)handleClickMessage:(id)a0;
+ (void)handleNewXmlMsg:(id)a0;
+ (void)sendSystemMessage:(id)a0 toChat:(id)a1;

@end
