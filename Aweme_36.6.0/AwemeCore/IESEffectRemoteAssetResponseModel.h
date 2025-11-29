@class NSString, NSArray;

@interface IESEffectRemoteAssetResponseModel : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, copy, nonatomic) NSArray *urlPrefix;
@property (readonly, copy, nonatomic) NSArray *assetModelList;
@property (readonly, nonatomic) BOOL updated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void)updateFileUrlsForAssetModelList;
- (void).cxx_destruct;

@end
