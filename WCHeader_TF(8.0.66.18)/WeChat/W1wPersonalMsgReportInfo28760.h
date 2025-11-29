@class NSString;

@interface W1wPersonalMsgReportInfo28760 : NSObject

@property (nonatomic) long long scene;
@property (retain, nonatomic) NSString *sceneNote;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *pageId;
@property (retain, nonatomic) NSString *boxInfo;
@property (retain, nonatomic) NSString *docInfo;
@property (retain, nonatomic) NSString *itemInfo;
@property (retain, nonatomic) NSString *docExtInfo;
@property (retain, nonatomic) NSString *boxExtInfo;
@property (nonatomic) unsigned int actionType;
@property (retain, nonatomic) NSString *extInfo;
@property (nonatomic) unsigned long long actionTimeStamp;
@property (retain, nonatomic) NSString *liteAppVersion;
@property (nonatomic) unsigned int category;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *pageInfo;
@property (nonatomic) unsigned long long *StayTime;

- (id)getReportString;
- (void).cxx_destruct;

@end
