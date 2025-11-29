@class NSString, _TtC21AWEMusicStreamingImpl9LunaVideo, NSArray, _TtC21AWEMusicStreamingImpl18LunaPlayExtraModel;

@interface AWEMusicStreamingImpl.VideoInfo : MTLModel {
    void /* function */ songID;
    void /* function */ fetchDay;
    void /* unknown type, empty encoding */ $__lazy_storage_$_extraModel;
}

@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl9LunaVideo *video;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *artistsName;
@property (nonatomic, readonly) NSArray *artistsArr;
@property (nonatomic, readonly) NSArray *usersIdArr;
@property (nonatomic, readonly) NSArray *artistsIdArr;
@property (nonatomic, readonly) NSString *totalArtistsID;
@property (nonatomic, readonly) NSString *totalUsersID;
@property (nonatomic, copy) NSArray *artists;
@property (nonatomic) BOOL isCollected;
@property (nonatomic, readonly) BOOL isPlayableForCopyright;
@property (nonatomic, copy) NSString *songID;
@property (nonatomic, copy) NSString *fetchDay;
@property (nonatomic, retain) _TtC21AWEMusicStreamingImpl18LunaPlayExtraModel *extraModel;

+ (id)encodingBehaviorsByPropertyKey;

- (id)originalMedia;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)media;
- (id)initWithCoder:(id)a0;

@end
