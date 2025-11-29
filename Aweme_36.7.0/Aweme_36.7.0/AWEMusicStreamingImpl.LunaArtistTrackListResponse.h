@class NSArray, NSString;

@interface AWEMusicStreamingImpl.LunaArtistTrackListResponse : AWEMusicStreamingImpl.LunaBaseApiResponseModel {
    void /* function */ hotTracks;
    void /* function */ maxCursor;
}

@property (nonatomic, copy) NSArray *hotTracks;
@property (nonatomic) BOOL hasMore;
@property (nonatomic, copy) NSString *maxCursor;

+ (id)hotTracksJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
