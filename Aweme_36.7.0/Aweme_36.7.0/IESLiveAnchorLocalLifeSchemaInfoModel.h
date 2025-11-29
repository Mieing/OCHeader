@class NSString, IESLiveAnchorLocalLifeConfigInfoModel, NSDictionary;

@interface IESLiveAnchorLocalLifeSchemaInfoModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL hasLifePermission;
@property (retain, nonatomic) NSString *lifeCardLinkV2;
@property (retain, nonatomic) NSString *lifeNoCardLinkV2;
@property (retain, nonatomic) NSString *popTitle;
@property (retain, nonatomic) IESLiveAnchorLocalLifeConfigInfoModel *businessConfig;
@property (retain, nonatomic) IESLiveAnchorLocalLifeConfigInfoModel *userConfig;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)businessConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)userConfigJSONTransformer;

- (void).cxx_destruct;

@end
