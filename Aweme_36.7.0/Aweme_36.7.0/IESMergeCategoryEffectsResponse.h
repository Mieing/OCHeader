@class IESCategoryEffectsModel, NSArray, NSString, NSMutableDictionary;

@interface IESMergeCategoryEffectsResponse : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) IESCategoryEffectsModel *categoryEffects;
@property (readonly, copy, nonatomic) NSArray *urlPrefix;
@property (readonly, copy, nonatomic) NSString *recId;
@property (readonly, nonatomic) NSMutableDictionary *effectsMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)preProcessEffects;
- (void).cxx_destruct;
- (void)setPanelName:(id)a0;

@end
