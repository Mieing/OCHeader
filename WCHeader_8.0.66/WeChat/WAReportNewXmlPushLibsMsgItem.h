@class NSString;

@interface WAReportNewXmlPushLibsMsgItem : WAReportBaseItem

@property (nonatomic) unsigned long long receiveTime;
@property (retain, nonatomic) NSString *msgId;
@property (nonatomic) unsigned int busiType;
@property (nonatomic) unsigned int msgType;
@property (nonatomic) unsigned int state;

+ (void)reportWithMsg:(id)a0 state:(unsigned int)a1;

- (int)reportID;
- (id)reportString;
- (void).cxx_destruct;

@end
