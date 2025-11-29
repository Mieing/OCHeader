@class NSString;

@interface AWEMusicStreamingImpl.LunaSearchDataMeta : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ itemType;
}

@property (nonatomic, copy) NSString *itemType;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
