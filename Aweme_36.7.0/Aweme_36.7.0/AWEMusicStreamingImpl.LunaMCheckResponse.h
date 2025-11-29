@class NSArray;

@interface AWEMusicStreamingImpl.LunaMCheckResponse : AWEMusicStreamingImpl.LunaBaseApiResponseModel {
    void /* function */ mediaStatus;
}

@property (nonatomic, copy) NSArray *mediaStatus;

+ (id)mediaStatusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
