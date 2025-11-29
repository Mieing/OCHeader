@class NSString, AWENearbyResourceSizeConfig, AWENearbyResourceMarginConfig;

@interface AWENearbyResourceLayoutConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWENearbyResourceSizeConfig *widthConfig;
@property (retain, nonatomic) AWENearbyResourceSizeConfig *heightConfig;
@property (retain, nonatomic) AWENearbyResourceMarginConfig *marginConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
