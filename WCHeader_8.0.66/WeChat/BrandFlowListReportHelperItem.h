@class NSString;

@interface BrandFlowListReportHelperItem : NSObject

@property (nonatomic) unsigned int enterScene;
@property (nonatomic) BOOL hasNewMsgWhenClick;
@property (nonatomic) unsigned int newMsgContactCount;
@property (nonatomic) unsigned int enterPos;
@property (retain, nonatomic) NSString *enterUserName;
@property (nonatomic) unsigned long long beginExposeTimeInMs;
@property (nonatomic) unsigned long long totalStayBackgroundTimeInMs;
@property (nonatomic) unsigned long long startEnterBackgroundTimeInMs;

- (unsigned long long)currentStayTime;
- (void)resetStayTime;
- (void).cxx_destruct;

@end
