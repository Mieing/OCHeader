@class NSArray;

@interface AWEMusicStreamingImpl.LunaAssets : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ assetInfos;
}

@property (nonatomic, copy) NSArray *assetInfos;

+ (id)assetInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
