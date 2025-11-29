@class NSString;

@interface AWEECCommodityLandingConfiguration : NSObject

@property (copy, nonatomic) NSString *commodityID;
@property (nonatomic) long long landingType;
@property (copy, nonatomic) NSString *keyword;
@property (nonatomic) BOOL disableRelatedMerchandises;
@property (nonatomic) BOOL isOptAB;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *sourceBtmToken;

- (void).cxx_destruct;

@end
