@class AVAudioPlayer, NSString, ACCVoiceEffectDataSource, AWETextStickerReadModel, NSNumber;
@protocol ACCVoiceEffectItemProtocol;

@interface ACCTextReadEffectSelectPanelModel : NSObject <ACCVoiceEffectDataSourceAdapter, AVAudioPlayerDelegate>

@property (retain, nonatomic) AVAudioPlayer *audioPlayer;
@property (retain, nonatomic) id<ACCVoiceEffectItemProtocol> curPreviewItem;
@property (retain, nonatomic) ACCVoiceEffectDataSource *dataSource;
@property (retain, nonatomic) NSNumber *speedRate;
@property (retain, nonatomic) AWETextStickerReadModel *readModel;
@property (nonatomic) unsigned long long fromTag;
@property (nonatomic) unsigned long long openType;
@property (nonatomic) BOOL enableTimestamp;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } targetDuration;
@property (copy, nonatomic) id /* block */ textReaderPanelBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchPanelInfoAndLandLastSelectItem;
- (void)forceStopPreview;
- (id)itemOfEffect:(id)a0;
- (id)cellClassesOfPage:(unsigned long long)a0;
- (void)configCell:(id)a0 useItem:(id)a1 atIndex:(id)a2 page:(unsigned long long)a3;
- (void)prepareItem:(id)a0 index:(id)a1 completion:(id /* block */)a2;
- (BOOL)itemPrepared:(id)a0 index:(id)a1;
- (BOOL)compareItem:(id)a0 matchLandingID:(id)a1;
- (Class)cellClzAtIndex:(id)a0 page:(unsigned long long)a1;
- (id)filterItemList:(id)a0 atPageIndex:(unsigned long long)a1;
- (void)cancelPreview;
- (void)previewItem:(id)a0;
- (void)changeAudioPlayerStatus:(BOOL)a0;
- (void)stopAudioPlayer;
- (id)sourceInfo;
- (void).cxx_destruct;
- (id)init;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;

@end
