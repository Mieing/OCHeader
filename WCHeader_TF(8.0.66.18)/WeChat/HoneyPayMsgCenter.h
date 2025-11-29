@interface HoneyPayMsgCenter : NSObject

+ (BOOL)isHoneyPayMessageForNewWCPayBizExt:(id)a0;
+ (void)handleUpdate:(id)a0;
+ (void)updateMessageWithBizId:(id)a0 chatName:(id)a1 content:(id)a2;
+ (void)addDataSysMessage:(id)a0 chatName:(id)a1;
+ (void)handleClickMessage:(id)a0;
+ (id)getMsg:(id)a0 chatterName:(id)a1;
+ (BOOL)hanldeClickSysMsg:(id)a0 chatterName:(id)a1 nodeViewDelegate:(id)a2;
+ (id)summayText:(id)a0;

@end
