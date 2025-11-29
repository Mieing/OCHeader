@class NSDictionary;

@interface AWEMusicStreamingImpl.LunaClipMappingResponse : AWEMusicStreamingImpl.LunaBaseApiResponseModel {
    void /* function */ mappingMedia;
}

@property (nonatomic, copy) NSDictionary *mappingMedia;

+ (id)mappingMediaJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
