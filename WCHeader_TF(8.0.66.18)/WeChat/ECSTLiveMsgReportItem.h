@class NSString;

@interface ECSTLiveMsgReportItem : MMObject

@property (copy, nonatomic) NSString *bizUserName;
@property (nonatomic) unsigned long long brandMsgId;
@property (nonatomic) unsigned int exposeTimestamp;
@property (nonatomic) unsigned int sessionID;
@property (copy, nonatomic) NSString *liveExportID;
@property (nonatomic) BOOL isClick;
@property (nonatomic) unsigned int liveScene;

+ (id)reportKeyWithMsg:(id)a0;

- (id)toReportString;
- (void).cxx_destruct;

@end
