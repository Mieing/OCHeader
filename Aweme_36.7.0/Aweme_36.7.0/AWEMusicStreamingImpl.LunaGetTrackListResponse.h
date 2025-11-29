@class NSArray;

@interface AWEMusicStreamingImpl.LunaGetTrackListResponse : AWEMusicStreamingImpl.LunaBaseApiResponseModel {
    void /* function */ items;
}

@property (nonatomic, copy) NSArray *items;

+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
