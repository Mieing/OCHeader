@class NSString;

@interface AWEMusicStreamingImpl.LunaAlbumResponse : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ itemID;
}

@property (nonatomic, copy) NSString *itemID;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
