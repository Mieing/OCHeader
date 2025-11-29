@class AWEKaraokeLyricsSong, NSMutableDictionary, NSDictionary, NSString, AWEKaraokeEditModel, ACCEditMVModel, NSNumber;
@protocol ACCPublishRepository, ACCMusicKaraokeAudioModelProtocol, ACCMusicModelProtocolD;

@interface AWERepoKaraokeModel : NSObject <NSCopying, ACCRepositoryRequestParamsDeprecated, ACCRepositoryContextDeprecated, ACCRepoKaraokeModelProtocol, ACCRepositoryTrackContextDeprecated, AWERepositoryDraftProtocol, ACCRepositoryDraftContextDeprecated>

@property (copy, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) NSMutableDictionary *mTrackParams;
@property (nonatomic) BOOL enterWithMusic;
@property (nonatomic) BOOL enableRecordSelectMusic;
@property (copy, nonatomic) NSString *enterKaraokeSelectMusicId;
@property (retain, nonatomic) AWEKaraokeLyricsSong *lyricsModel;
@property (retain, nonatomic) NSDictionary *editJsonInfo;
@property (retain, nonatomic) NSDictionary *musicJsonInfo;
@property (retain, nonatomic) NSString *midiLocalPath;
@property (retain, nonatomic) AWEKaraokeEditModel *editModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;
@property (nonatomic) BOOL isFromAuthorityGuide;
@property (nonatomic) long long recordMode;
@property (retain, nonatomic) ACCEditMVModel *mvModel;
@property (retain, nonatomic) id<ACCMusicKaraokeAudioModelProtocol> originalSongTrack;
@property (retain, nonatomic) id<ACCMusicKaraokeAudioModelProtocol> accompanyTrack;
@property (retain, nonatomic) id<ACCMusicModelProtocolD> musicModel;
@property (retain, nonatomic) NSNumber *shootDuration;
@property (nonatomic) BOOL lightningStyleKaraoke;
@property (retain, nonatomic) NSNumber *lyricsStartTime;
@property (nonatomic) BOOL fromRecordExport;

- (id)draftFolder;
- (id)acc_publishRequestParams:(id)a0;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (id)acc_referExtraParams;
- (double)originalSoundStartTime;
- (double)accompanyStartTime;
- (void)addTrackParamsFromDictionary:(id)a0;
- (void)setTrackParam:(id)a0 forKey:(id)a1;
- (void)draftWillBeSavedWithID:(id)a0;
- (void)modelDidRetrievedFromDraftWithID:(id)a0;
- (void)generateMVFromDraftVideoData:(id)a0 taskId:(id)a1 completion:(id /* block */)a2;
- (void)generateDefaultBGMVFromDraft:(id)a0 taskId:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
