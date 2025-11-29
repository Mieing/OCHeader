@class IESLiveKTVResourceManager, NSNumber, IESLiveLyricViewConfig, NSString, IESLiveKRCSentenceTimeSource, NSMutableArray, RACCompoundDisposable;
@protocol IESLiveKTVLyricsHandlerDelegate, IESLiveKTVLyricsReceiverDataSource;

@interface IESLiveKTVLyricsReceiver : NSObject <IESLiveKTVLyricsHandler>

@property (nonatomic) unsigned long long currentLyricType;
@property (nonatomic) BOOL isAnimating;
@property (retain, nonatomic) NSMutableArray *krcSentences;
@property (retain, nonatomic) IESLiveKRCSentenceTimeSource *krcSentenceTimeSource;
@property (nonatomic) BOOL fullLyrics;
@property (nonatomic) BOOL isDownloadLyrcis;
@property (retain, nonatomic) RACCompoundDisposable *disposable;
@property (retain, nonatomic) IESLiveKTVResourceManager *resourceManager;
@property (nonatomic) double playingTime;
@property (retain, nonatomic) NSNumber *currentPlayingMusicID;
@property (weak, nonatomic) id<IESLiveKTVLyricsHandlerDelegate> delegate;
@property (weak, nonatomic) id<IESLiveKTVLyricsReceiverDataSource> dataSource;
@property (retain, nonatomic) IESLiveLyricViewConfig *lyricViewConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleSEIModel:(id)a0;
- (void)handleAudienceLyricStart:(id)a0;
- (void)finishedMusicWithID:(id)a0 force:(BOOL)a1;
- (void)handleMoreLyrics:(id)a0;
- (void)prepareLocalLyricsWithKtvSeiModel:(id)a0;
- (void)appendMoreLyricSentences:(id)a0;
- (void)startLyricTimeSourceIfNeeded;
- (void)loadLocalLyricsV2:(id)a0 musicID:(id)a1 lyricType:(unsigned long long)a2 lyricsOffset:(double)a3 duration:(long long)a4;
- (void)loadLyricFromLocaPath:(id)a0 musicID:(id)a1 lyricType:(unsigned long long)a2 lyricsOffset:(double)a3 duration:(long long)a4;
- (id)getFullLyricsSentences;
- (BOOL)hasLyrics;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
