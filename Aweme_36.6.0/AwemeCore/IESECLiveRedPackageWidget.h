@class IESECLiveRandomDelayTimer;

@interface IESECLiveRedPackageWidget : IESECLiveBaseWidget

@property (nonatomic) BOOL needFetchRedPackage;
@property (nonatomic) double expireDuration;
@property (retain, nonatomic) IESECLiveRandomDelayTimer *expireTimer;
@property (retain, nonatomic) IESECLiveRandomDelayTimer *firstPeakReduce;

- (void)widgetMount;
- (void)widgetRefresh;
- (void)didShowShopCart:(BOOL)a0;
- (void)didHideShopCart:(BOOL)a0;
- (void)handleAfterActuallyEnterRoom;
- (void)requestMoreWhenRedPackApplied:(id)a0;
- (void)setFetchRedPackageDelay:(long long)a0;
- (void)requestRedPackageInfo;
- (long long)arc4random10mins;
- (void).cxx_destruct;

@end
