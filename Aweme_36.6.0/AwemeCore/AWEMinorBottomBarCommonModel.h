@class NSString, AWEMinorBottomBarImageModel;

@interface AWEMinorBottomBarCommonModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long barType;
@property (retain, nonatomic) AWEMinorBottomBarImageModel *icon;
@property (retain, nonatomic) AWEMinorBottomBarImageModel *image;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *symbol;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *color;
@property (nonatomic) long long supportMinVersionCode;
@property (retain, nonatomic) AWEMinorBottomBarImageModel *endIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageJSONTransformer;
+ (id)iconJSONTransformer;
+ (id)endIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
