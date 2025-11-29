@class NSString, NSArray;

@interface AWEMusicStreamingImpl.LunaSearchGroup : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ id;
    void /* function */ nextCursor;
    void /* function */ items;
}

@property (nonatomic, copy) NSString *id;
@property (nonatomic) BOOL hasMore;
@property (nonatomic, copy) NSString *nextCursor;
@property (nonatomic, copy) NSArray *items;

+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
