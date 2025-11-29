@class NSString, IESECURLModel, NSArray, NSNumber;

@interface IESECGoodsCertificationModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) IESECURLModel *icon;
@property (nonatomic) long long bannerType;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) IESECURLModel *backgroundImage;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *tagType;
@property (copy, nonatomic) NSString *contentLeftGradientColor;
@property (copy, nonatomic) NSString *contentRightGradientColor;
@property (copy, nonatomic) NSString *borderColor;
@property (copy, nonatomic) NSArray *bannerItems;
@property (retain, nonatomic) NSNumber *bannerContentStrategy;
@property (nonatomic) long long iconLeftInset;
@property (nonatomic) long long iconRightInset;
@property (nonatomic) long long topPadding;
@property (nonatomic) long long bottomPadding;
@property (nonatomic) long long leftPadding;
@property (nonatomic) long long rightPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bannerItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isUseBannerItems;
- (void).cxx_destruct;

@end
