@class NSMutableAttributedString, NSString, NSNumber, AWEURLModel;

@interface AWETagLabelModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *isDouPlusAD;
@property (retain, nonatomic) NSNumber *position;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColorString;
@property (copy, nonatomic) NSString *textColorStringForWhite;
@property (copy, nonatomic) NSString *iconColorString;
@property (copy, nonatomic) NSString *iconColorStringForWhite;
@property (copy, nonatomic) NSString *colorString;
@property (copy, nonatomic) NSString *colorStringForWhite;
@property (copy, nonatomic) NSString *webURL;
@property (nonatomic) unsigned long long type;
@property (nonatomic) long long style;
@property (nonatomic) long long showSeconds;
@property (retain, nonatomic) AWEURLModel *icon;
@property (nonatomic) BOOL isLimitAdTagOptimization;
@property (nonatomic) BOOL disableBackgroundColor;
@property (retain, nonatomic) NSMutableAttributedString *adMoreTagAttributedString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconJSONTransformer;
+ (id)styleJSONTransformer;
+ (id)aweCommerce_subModelPropertyKey;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isDynamicStyle;
- (BOOL)shouldShowAdTagOnGoodsInfo;
- (void).cxx_destruct;

@end
