@class NSDictionary;

@interface IESGCPGameShowExplainCardLynxContainerParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSDictionary *initialData;
@property (nonatomic) BOOL needAnimation;
@property (nonatomic) BOOL isAnchorIntroduce;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
