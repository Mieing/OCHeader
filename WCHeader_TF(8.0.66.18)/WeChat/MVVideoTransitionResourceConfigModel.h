@class NSString, MVVideoTransitionResourceConfigModelName;

@interface MVVideoTransitionResourceConfigModel : MMObject

@property (retain, nonatomic) NSString *transitionId;
@property (retain, nonatomic) MVVideoTransitionResourceConfigModelName *transitionName;
@property (nonatomic) BOOL isShowInPanel;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (id)modelContainerPropertyMappingForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
