@class NSString, IESECGoodsDetailMarketingActivityDataModel, NSObject, IESECGoodsActivityCountdown;
@protocol OS_dispatch_source, IESECGoodsDetailPageActivityManagerDelegate;

@interface IESECGoodsDetailPageActivityManager : NSObject

@property (copy, nonatomic) NSString *pageIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *groupBuyingTimer;
@property (nonatomic) BOOL auctionTimeOn;
@property (retain, nonatomic) IESECGoodsDetailMarketingActivityDataModel *activityModel;
@property (retain, nonatomic) IESECGoodsActivityCountdown *countdown;
@property (nonatomic) long long preState;
@property (weak, nonatomic) id<IESECGoodsDetailPageActivityManagerDelegate> delegate;

- (BOOL)LessThanOneDay;
- (void)updateAuctionState:(long long)a0;
- (id)currentCountdownString;
- (void)updateActivityInfoWithComponentData:(id)a0;
- (void)setupGroupBuyingTimer;
- (id)preSaleText;
- (void)autoUpdateAuction;
- (id)initWithComponentData:(id)a0 pageIdentifier:(id)a1;
- (void)updateActivityInfoWithActivitytData:(id)a0;
- (void).cxx_destruct;
- (long long)state;
- (void)dealloc;
- (void)setupTimer;

@end
