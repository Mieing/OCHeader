@class NSString;

@interface MinimizeGenerateReportInfo : NSObject

@property (nonatomic) unsigned long long clickTimeStamp;
@property (nonatomic) unsigned long long generateType;
@property (nonatomic) unsigned int generateScene;
@property (retain, nonatomic) NSString *miniSessionId;
@property (retain, nonatomic) NSString *aggreSessionId;
@property (nonatomic) long long taskOrder;
@property (nonatomic) unsigned long long normalTaskCnt;
@property (nonatomic) unsigned long long passiveTaskCnt;
@property (nonatomic) unsigned long long taskType;
@property (nonatomic) unsigned long long bizScene;
@property (retain, nonatomic) NSString *bizId;
@property (retain, nonatomic) NSString *bizSubId;
@property (retain, nonatomic) NSString *bizName;
@property (nonatomic) int state;
@property (nonatomic) unsigned long long overloadedType;

- (void).cxx_destruct;

@end
