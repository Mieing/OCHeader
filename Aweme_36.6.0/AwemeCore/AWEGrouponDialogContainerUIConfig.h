@class NSString, AWEGrouponDialogContainerMarginConfig, AWEGrouponDialogContainerLayoutGravity, AWEGrouponDialogContainerWidthHeightConfig;

@interface AWEGrouponDialogContainerUIConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEGrouponDialogContainerWidthHeightConfig *widthConfig;
@property (retain, nonatomic) AWEGrouponDialogContainerWidthHeightConfig *heightConfig;
@property (retain, nonatomic) AWEGrouponDialogContainerLayoutGravity *layoutGravity;
@property (retain, nonatomic) AWEGrouponDialogContainerMarginConfig *marginConfig;
@property (nonatomic) BOOL needInterceptAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)marginConfigJSONTransformer;
+ (id)widthConfigJSONTransformer;
+ (id)heightConfigJSONTransformer;
+ (id)layoutGravityJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
