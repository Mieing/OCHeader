@class NSArray;

@interface AWEMusicStreamingImpl.LunaSongtabResponse : AWEMusicStreamingImpl.LunaBaseApiResponseModel {
    void /* function */ items;
}

@property (nonatomic, copy) NSArray *items;
@property (nonatomic) BOOL hasMore;

+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
