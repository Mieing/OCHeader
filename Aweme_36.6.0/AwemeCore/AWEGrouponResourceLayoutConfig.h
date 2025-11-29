@class NSString, AWEGrouponResourceSizeConfig, AWEGrouponResourceMarginConfig;

@interface AWEGrouponResourceLayoutConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEGrouponResourceSizeConfig *widthConfig;
@property (retain, nonatomic) AWEGrouponResourceSizeConfig *heightConfig;
@property (retain, nonatomic) AWEGrouponResourceMarginConfig *marginConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
