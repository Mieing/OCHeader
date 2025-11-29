@class NSString;

@interface IESLiveOpenLiveEffectPanelParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *categoryKey;
@property (copy, nonatomic) NSString *subCategoryKey;
@property (copy, nonatomic) NSString *effectID;
@property (nonatomic) BOOL shouldScrollToEffect;
@property (nonatomic) BOOL shouldSelectEffect;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
