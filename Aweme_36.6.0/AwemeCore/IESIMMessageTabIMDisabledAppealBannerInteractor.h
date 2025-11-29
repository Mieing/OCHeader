@class IESIMDisabledAppealResponseModel;

@interface IESIMMessageTabIMDisabledAppealBannerInteractor : AWEIMMessageTabCommonBannerInteractor

@property (copy, nonatomic) id /* block */ closeAction;
@property (copy, nonatomic) id /* block */ textAction;
@property (readonly, nonatomic) IESIMDisabledAppealResponseModel *appealResponseModel;

+ (long long)bannerPriorityValue;

- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (id)bannerViewCreated;
- (void)bannerViewDidShow;
- (BOOL)shouldShowCacheBannerView;
- (void)shouldShowCacheBannerView:(id /* block */)a0;
- (void)updateWithAppealModel:(id)a0;
- (void)setAppealModel:(id)a0;
- (void).cxx_destruct;

@end
