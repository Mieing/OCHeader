@interface AWEGeneralSearchUserGuideModel : AWEBaseApiModel

@property (nonatomic) BOOL showResultGuide;
@property (nonatomic) double resultGuideTime;
@property (nonatomic) BOOL showInFlowGuide;
@property (nonatomic) double inFlowGuideTime;
@property (nonatomic) double inFlowGuideDismissTime;

+ (id)JSONKeyPathsByPropertyKey;

@end
