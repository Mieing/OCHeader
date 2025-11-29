@class NSString, NSArray, AWEURLModel;

@interface AWEAwemeConcernGoodsCardBackgroundModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *hue;
@property (copy, nonatomic) NSArray *bulletCommentColors;
@property (copy, nonatomic) NSArray *defaultBackgroundColors;
@property (copy, nonatomic) NSArray *defaultBackgroundPositions;
@property (copy, nonatomic) NSString *shadowColor;
@property (nonatomic) unsigned long long templateType;
@property (retain, nonatomic) AWEURLModel *backgroundImage;
@property (retain, nonatomic) AWEURLModel *backgroundHeadImage;
@property (copy, nonatomic) NSArray *topMaskColors;
@property (copy, nonatomic) NSArray *topMaskPositions;
@property (retain, nonatomic) AWEURLModel *backgroundMiddleImage;
@property (copy, nonatomic) NSString *midMaskColor;
@property (copy, nonatomic) NSString *backgroundLynxUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)templateTypeJSONTransformer;
+ (id)topMaskColorsJSONTransformer;
+ (id)topMaskPositionsJSONTransformer;
+ (id)midMaskColorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
