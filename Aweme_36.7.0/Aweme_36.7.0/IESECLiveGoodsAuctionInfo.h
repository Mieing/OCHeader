@class IESECLiveImageURLModel, NSString, NSNumber, IESECLiveGoodsAuctionUserModel;

@interface IESECLiveGoodsAuctionInfo : MTLModel <MTLJSONSerializing> {
    NSNumber *_currentInterval;
}

@property (copy, nonatomic) NSNumber *price;
@property (copy, nonatomic) NSString *priceLabel;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *jumpUrl;
@property (copy, nonatomic) IESECLiveGoodsAuctionUserModel *currentUserInfo;
@property (copy, nonatomic) NSString *buttonLabel;
@property (readonly, nonatomic) BOOL buttonEnabled;
@property (retain, nonatomic) NSNumber *endTime;
@property (nonatomic) long long bizID;
@property (retain, nonatomic) IESECLiveImageURLModel *statusIcon;
@property (retain, nonatomic) NSNumber *auctionID;
@property (retain, nonatomic) NSNumber *logicalClock;
@property (nonatomic) BOOL hotSaleStyleDisabled;
@property (readonly, nonatomic) BOOL shouldShowHotSale;
@property (readonly, nonatomic) BOOL isNewAuction;
@property (readonly, nonatomic) NSNumber *currentInterval;
@property (readonly, nonatomic) BOOL warning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)decreaseSeconds:(long long)a0;
- (BOOL)isAuctionV2;
- (BOOL)isDoingAuctionV2;
- (void)updateEndTime:(long long)a0;
- (BOOL)needRevertLimitBizStatusManual;
- (BOOL)needUpdateLimitBizStatusManual;
- (void).cxx_destruct;

@end
