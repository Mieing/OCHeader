@class IESCategoryEffectsModel, NSArray, NSString, IESPlatformPanelModel, NSMutableDictionary;

@interface IESMergePanelInfoResponse : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) IESCategoryEffectsModel *categoryEffects;
@property (readonly, copy, nonatomic) NSArray *categories;
@property (readonly, copy, nonatomic) NSString *recId;
@property (readonly, copy, nonatomic) IESPlatformPanelModel *panel;
@property (readonly, copy, nonatomic) NSArray *urlPrefix;
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, copy, nonatomic) NSString *defaultFrontFilterID;
@property (readonly, copy, nonatomic) NSString *defaultRearFilterID;
@property (readonly, nonatomic) NSMutableDictionary *effectsMap;
@property (readonly, nonatomic) BOOL updated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void)preProcessEffects;
- (void).cxx_destruct;
- (void)setPanelName:(id)a0;

@end
