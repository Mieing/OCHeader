@class NSString;

@interface MMEasterEggNewYearActivityReportObject : NSObject

@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned long long materialId;
@property (nonatomic) unsigned int videoTimeInMs;
@property (nonatomic) unsigned int videoPlayCount;
@property (nonatomic) unsigned int videoPlayTotalTimeInMs;

- (void)startShowCardView;
- (void)endShowCardView;
- (void)closeViewController;
- (void)reportWithAction:(unsigned long long)a0;
- (void).cxx_destruct;

@end
