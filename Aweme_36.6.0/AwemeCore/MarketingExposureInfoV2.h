@class NSString;

@interface MarketingExposureInfoV2 : GPBMessage

@property (nonatomic) int styleType;
@property (nonatomic) BOOL hasStyleType;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL hasText;
@property (nonatomic) long long productId;
@property (nonatomic) BOOL hasProductId;
@property (copy, nonatomic) NSString *productIdStr;
@property (nonatomic) BOOL hasProductIdStr;

+ (id)descriptor;

@end
