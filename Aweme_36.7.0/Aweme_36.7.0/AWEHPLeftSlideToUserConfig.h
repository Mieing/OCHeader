@class NSDictionary, AWEHPLeftSlideToUserGuideConfig, NSString;

@interface AWEHPLeftSlideToUserConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) double mainTabSlideWidth;
@property (nonatomic) double edgeSlideWidth;
@property (copy, nonatomic) NSDictionary *supportTabs;
@property (retain, nonatomic) AWEHPLeftSlideToUserGuideConfig *guideConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValid;

@end
