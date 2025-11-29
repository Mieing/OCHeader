@class NSArray, IESLiveClientUIInfo;

@interface IESLiveInteractUserPreprocess : NSObject

@property (nonatomic) BOOL liveInteractListVersionEnable;
@property (copy, nonatomic) NSArray *oldList;
@property (copy, nonatomic) IESLiveClientUIInfo *oldClientUIInfo;
@property (nonatomic) long long reportInterval;
@property (nonatomic) long long continuousFallBackReportCount;
@property (nonatomic) BOOL enableUseBiggerVersion;
@property (nonatomic) BOOL enableLowVersionCoverState;
@property (nonatomic) unsigned long long oldVersion;
@property (nonatomic) long long currentProcessedCount;
@property (nonatomic) long long fallBackCount;
@property (nonatomic) long long zeroVersionCount;
@property (nonatomic) long long continuousFallBackCount;

- (void)pr_updateWithLowVersionUser:(id)a0 bigVersionUser:(id)a1;
- (void)pr_clean;
- (id)initWithMetaScene:(unsigned long long)a0;
- (id)preprocessWithListUsers:(id)a0 version:(unsigned long long)a1;
- (id)processWithClientUIInfo:(id)a0 version:(unsigned long long)a1;
- (void)linkerStart;
- (void)linkerEnd;
- (void).cxx_destruct;

@end
