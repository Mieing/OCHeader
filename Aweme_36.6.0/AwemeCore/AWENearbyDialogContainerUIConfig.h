@class NSString, AWENearbyDialogContainerMarginConfig, AWENearbyDialogContainerWidthHeightConfig, AWENearbyDialogContainerLayoutGravity;

@interface AWENearbyDialogContainerUIConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWENearbyDialogContainerWidthHeightConfig *widthConfig;
@property (retain, nonatomic) AWENearbyDialogContainerWidthHeightConfig *heightConfig;
@property (retain, nonatomic) AWENearbyDialogContainerLayoutGravity *layoutGravity;
@property (retain, nonatomic) AWENearbyDialogContainerMarginConfig *marginConfig;
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
