@class EncashResultPageInfo, LiveRewardIncomeBizInfo;

@interface WCCoinFetchMoneySuccessViewController : WCPayPaidSuccessStatusViewController

@property (nonatomic) unsigned long long fetchAmount;
@property (nonatomic) BOOL fetchFromLiveStyle;
@property (retain, nonatomic) LiveRewardIncomeBizInfo *liveIncomeBizInfo;
@property (retain, nonatomic) EncashResultPageInfo *pageInfo;

- (void)viewDidLoad;
- (id)dateStringFromTimestamp:(long long)a0;
- (id)detailModel;
- (BOOL)isFetchFromLivePersonal;
- (BOOL)isFetchFromLiveStudio;
- (void).cxx_destruct;

@end
