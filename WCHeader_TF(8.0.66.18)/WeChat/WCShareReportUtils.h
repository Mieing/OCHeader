@interface WCShareReportUtils : NSObject

+ (BOOL)isYuanbaoInstall;
+ (id)getEnterSource:(id)a0;
+ (id)getMsgWrapWithMsgIDList:(id)a0 chatName:(id)a1;
+ (id)generateMsgListDesc:(id)a0;
+ (id)getMultiSelecCommonReportParams:(id)a0 chatName:(id)a1;
+ (void)reportMultiToolButtonClick:(id)a0 chatName:(id)a1 selectMsgLocalIds:(id)a2;

@end
