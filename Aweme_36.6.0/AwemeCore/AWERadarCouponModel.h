@class NSString, AWEIMMessageShowAnimationModel;

@interface AWERadarCouponModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *info;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL hasEmoji;
@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *buttonText;
@property (retain, nonatomic) AWEIMMessageShowAnimationModel *animateModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animateModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
