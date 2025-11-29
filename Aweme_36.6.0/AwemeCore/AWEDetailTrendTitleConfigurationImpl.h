@class AWEDetailTrendHeadTitleModel, NSString, IESServiceProvider, AWEDetailTrendTitleCell;

@interface AWEDetailTrendTitleConfigurationImpl : NSObject <AWEDetailTrendTitleConfiguration>

@property (weak, nonatomic) AWEDetailTrendTitleCell *trendTitleCell;
@property (weak, nonatomic) AWEDetailTrendHeadTitleModel *titleModel;
@property (weak, nonatomic) IESServiceProvider *provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)abInfo;
+ (BOOL)isEnableChangePlayInteractionMusicViewStyleStatus;
+ (BOOL)isEnableChangeTrendInteractionPageTitleStatus;
+ (id)trendInteractionPageTitle;

- (struct CGSize { double x0; double x1; })cellSizeForObject:(id)a0;
- (void)configWithModel:(id)a0 cell:(id)a1 serviceProvider:(id)a2;
- (void)updateTrendTitleWithCount:(long long)a0;
- (void)clickTag;
- (void).cxx_destruct;

@end
