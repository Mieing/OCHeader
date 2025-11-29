@class AWERepoStickerModel, NSString, AWERepoAuthorityModel, AWEVideoPublishViewModel, AWERepoMusicModel, AWERepoPublishConfigModel;

@interface ACCVideoPublishContextSnap : NSObject

@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (nonatomic) BOOL isDeepCopy;
@property (copy, nonatomic) NSString *snapProjectsUUIDS;
@property (retain, nonatomic) AWERepoPublishConfigModel *repoPublishConfig;
@property (retain, nonatomic) AWERepoMusicModel *repoMusic;
@property (retain, nonatomic) AWERepoAuthorityModel *repoAuthority;
@property (nonatomic) long long musicBeatsStatus;
@property (retain, nonatomic) AWERepoStickerModel *repoSticker;

- (BOOL)hasEditWithSnap:(id)a0;
- (void)p_snap;
- (void)updateMusicInfo;
- (void)updateMusicBeatStatus;
- (id)initWithPublishModel:(id)a0 deepCopy:(BOOL)a1;
- (BOOL)hasEditImagesWithSnap:(id)a0;
- (BOOL)hasEditPublishTitleWithSnap:(id)a0;
- (void).cxx_destruct;

@end
