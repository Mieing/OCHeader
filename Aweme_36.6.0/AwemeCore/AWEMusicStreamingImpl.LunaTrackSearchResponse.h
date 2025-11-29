@class NSArray, NSString, _TtC21AWEMusicStreamingImpl15LunaSearchGroup;

@interface AWEMusicStreamingImpl.LunaTrackSearchResponse : AWEMusicStreamingImpl.LunaBaseApiResponseModel {
    void /* function */ resultGroups;
    void /* function */ trackLyricInfos;
}

@property (nonatomic, copy) NSArray *resultGroups;
@property (nonatomic, readonly) BOOL hasMore;
@property (nonatomic, readonly) NSString *cursor;
@property (nonatomic, readonly) _TtC21AWEMusicStreamingImpl15LunaSearchGroup *group;
@property (nonatomic, copy) NSArray *trackLyricInfos;
@property (nonatomic, readonly) NSArray *trackItems;

+ (id)resultGroupsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
