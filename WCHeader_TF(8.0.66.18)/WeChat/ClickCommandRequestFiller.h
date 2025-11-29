@interface ClickCommandRequestFiller : NSObject

+ (void)fillMsgSource:(id)a0;
+ (void)fillBTSessionID:(id)a0;
+ (void)fillClickInfo:(id)a0 location:(id)a1 errCode:(unsigned int)a2;
+ (void)fillClickInfoWithEventXML:(id)a0;
+ (void)fillClickInfo:(id)a0 reqInfo:(id)a1;
+ (void)fillSessionStat:(id)a0;

@end
