@class NSString;

@interface AWEMusicStreamingImpl.LunaTrackLyricsMatch : AWEMusicStreamingImpl.LunaBaseApiModel {
    void /* function */ snippet;
}

@property (nonatomic, copy) NSString *snippet;
@property (nonatomic) long long startIndex;
@property (nonatomic) long long endIndex;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
