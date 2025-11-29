@class NSArray, NSDictionary, NSString, IESLiveGameOpenPlatformRevenueRankListViewModel;

@interface IESLiveGameOpenPlatformRevenueRankViewModel : NSObject

@property (retain, nonatomic) IESLiveGameOpenPlatformRevenueRankListViewModel *listViewModel;
@property (copy, nonatomic) NSArray *toolItems;
@property (copy, nonatomic) NSDictionary *trackingInfo;
@property (readonly, copy, nonatomic) NSString *appID;
@property (readonly, nonatomic) double panelHeight;

- (id)attachingDIContext;
- (void)onShow;
- (id)initWithAppID:(id)a0 panelHeight:(double)a1;
- (void)upodateTrackingInfoWithRankListArray:(id)a0 totalDiamonds:(long long)a1;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)reload:(id /* block */)a0;

@end
