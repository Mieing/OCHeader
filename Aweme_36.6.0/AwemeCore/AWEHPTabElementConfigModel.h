@class NSNumber, NSString, AWEHPTopBarContainerConfig, AWEHPBottomTabUIConfigModel, AWEHPTopTabRedDotUIConfig, AWEHPTopTabItemViewUIConfig, NSDictionary;

@interface AWEHPTabElementConfigModel : MTLModel <MTLJSONSerializing, AWEHPTabElementConfigProtocol>

@property (nonatomic) double endRatio;
@property (nonatomic) double segmentControlMaskWidth;
@property (retain, nonatomic) AWEHPTopBarContainerConfig *topBarContainerConfig;
@property (retain, nonatomic) AWEHPTopTabItemViewUIConfig *itemViewConfig;
@property (retain, nonatomic) AWEHPTopTabRedDotUIConfig *redDotConfig;
@property (retain, nonatomic) AWEHPBottomTabUIConfigModel *bottomTabConfig;
@property (retain, nonatomic) NSDictionary *topBarUIConfig;
@property (retain, nonatomic) NSNumber *topRatio;
@property (retain, nonatomic) NSNumber *topCTARatio;
@property (retain, nonatomic) NSNumber *topBubbleRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;

@end
