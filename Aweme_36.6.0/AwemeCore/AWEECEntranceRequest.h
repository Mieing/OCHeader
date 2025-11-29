@class NSString, NSDictionary, AWEGoodsEnterFullScreenRequest, AWEAwemeModel, AWEModernShopRequest, NSNumber;

@interface AWEECEntranceRequest : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (copy, nonatomic) NSString *sourcePage;
@property (copy, nonatomic) NSString *promotionID;
@property (retain, nonatomic) AWEGoodsEnterFullScreenRequest *fullScreenRequest;
@property (retain, nonatomic) AWEModernShopRequest *modernShopRequest;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *carrierType;
@property (copy, nonatomic) NSDictionary *extraData;
@property (nonatomic) long long internalFeedType;
@property (nonatomic) BOOL followStatus;
@property (nonatomic) BOOL avoidHalfMode;
@property (retain, nonatomic) NSNumber *visitStartTime;
@property (copy, nonatomic) NSString *sourceBtmToken;

- (void).cxx_destruct;

@end
