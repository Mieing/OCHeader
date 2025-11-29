@class IESPlatformPanelModel, NSString, NSArray, NSMutableDictionary;

@interface IESEffectPlatformResponseModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *defaultFrontFilterID;
@property (copy, nonatomic) NSString *defaultRearFilterID;
@property (copy, nonatomic) NSArray *collection;
@property (copy, nonatomic) NSArray *effects;
@property (copy, nonatomic) NSArray *categories;
@property (retain, nonatomic) IESPlatformPanelModel *panel;
@property (retain, nonatomic) NSMutableDictionary *effectsMap;
@property (nonatomic) BOOL needReprocessEffects;
@property (readonly, copy, nonatomic) NSArray *downloadedEffects;
@property (readonly, copy, nonatomic) NSArray *urlPrefix;
@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSString *recId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

@end
