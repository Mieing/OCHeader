@class NSString, IESECGoodsDetailActivityModel, IESECGoodsDetailParameters, IESECGoodsDetailModel, NSObject, IESECGoodsActivityCountdown;
@protocol OS_dispatch_source;

@interface IESECGoodsActivityMananger : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (copy, nonatomic) NSString *promotionId;
@property (nonatomic) long long preState;
@property (nonatomic) BOOL auctionTimeOn;
@property (readonly, nonatomic) IESECGoodsActivityCountdown *countdown;
@property (readonly, nonatomic) IESECGoodsActivityCountdown *ipActivityCountdown;
@property (readonly, nonatomic) IESECGoodsActivityCountdown *commonGirdleV2Countdown;
@property (retain, nonatomic) IESECGoodsDetailModel *goods;
@property (retain, nonatomic) IESECGoodsDetailActivityModel *activityModel;
@property (readonly, weak, nonatomic) IESECGoodsDetailParameters *params;

- (BOOL)inActivity;
- (BOOL)isAuction;
- (id)auctionCountdownString;
- (id)campaignSubType;
- (BOOL)isGroupBuying;
- (BOOL)inIPActivity;
- (BOOL)LessThanOneDay;
- (void)updateAuctionState:(long long)a0;
- (void)auctionDynamicFetch;
- (BOOL)isBidAuction;
- (BOOL)isDepositePresalePurpleStyleEnabled;
- (void)updateActivityManagerWithParameters:(id)a0;
- (void)updateActivityManager:(id)a0;
- (BOOL)isCommonGirdleV2CountDownEnabled;
- (void)calculateCountDown;
- (void)caculateCommonGirdleV2CountDown;
- (long long)ipActivityState;
- (BOOL)isUseCommonGirdle;
- (BOOL)isDepositePresale;
- (long long)presaleType;
- (BOOL)showActivityUI;
- (BOOL)hasAuctionHistory;
- (id)currentCountdownString;
- (id)campaignExtraType;
- (void).cxx_destruct;
- (long long)state;
- (long long)activityType;
- (id)initWithParameters:(id)a0;
- (void)dealloc;
- (void)setupTimer;
- (BOOL)hasActivity;

@end
