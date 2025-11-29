@class NSData, NSString, NSArray, MMFinderLiveKTVSongItem, MMFinderLiveKTVSongInfo, NSMutableDictionary, FinderLiveKtvSongScoreReportRequest_ScoreInfo, NSMutableArray, FinderLiveKtvSongScoreReportRequest_ExtReportInfo;
@protocol MMLiveUniqueTaskId;

@interface MMFinderLiveKSKitMusicSong : NSObject <MMFinderLiveKTVResourceExt>

@property (retain, nonatomic) id<MMLiveUniqueTaskId> taskId;
@property (retain, nonatomic) MMFinderLiveKTVSongItem *songItem;
@property (nonatomic) unsigned long long mode;
@property (readonly, nonatomic) unsigned long long requireSongResTypes;
@property (copy, nonatomic) id /* block */ resLoadCompletion;
@property (nonatomic) BOOL isPreparing;
@property (nonatomic) BOOL isResourceLoading;
@property (nonatomic) BOOL isResourceParsing;
@property (nonatomic) unsigned long long prepareResult;
@property (retain, nonatomic) NSArray *sentenceList;
@property (retain, nonatomic) NSArray *sentenceTimeList;
@property (retain, nonatomic) NSData *noteData;
@property (retain, nonatomic) MMFinderLiveKTVSongInfo *songInfo;
@property (retain, nonatomic) NSMutableDictionary *resourceDict;
@property (retain, nonatomic) NSMutableDictionary *resourceParseTaskDict;
@property (retain, nonatomic) NSMutableArray *musicNoteList;
@property (nonatomic) int midiTotalScore;
@property (retain, nonatomic) NSString *midiScoreLevel;
@property (retain, nonatomic) FinderLiveKtvSongScoreReportRequest_ScoreInfo *finalScoreInfo;
@property (retain, nonatomic) FinderLiveKtvSongScoreReportRequest_ExtReportInfo *finalSingExtReportInfo;
@property (readonly, nonatomic) NSString *songId;
@property (readonly, nonatomic) NSString *uniqueId;
@property (readonly, nonatomic) BOOL isSingingEnd;
@property (nonatomic) BOOL isSingBySelf;
@property (nonatomic) BOOL isSingAsMajor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)transferResTypeToOriginalResState:(unsigned int)a0;
+ (unsigned long long)transferResTypeToResState:(unsigned int)a0;
+ (id)transferAverScoreToLevel:(double)a0;
+ (int)goodScoreStandard;
+ (int)perfectScoreStandard;

- (id)initWithSongItem:(id)a0 taskId:(id)a1;
- (void)dealloc;
- (void)registerExtensions;
- (void)initDefaultDatas;
- (void)prepareResource:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)getNoteSrcData;
- (void)updateMusicNotes:(id)a0;
- (void)processMIDITotalScore:(int)a0;
- (void)processMIDIScoreLevel:(double)a0;
- (id)getSentenceSrcArray;
- (id)getLyricSentenceList;
- (id)getMusicNoteList;
- (void)updateFinalScoreInfo:(id)a0;
- (void)updateFinalSingExtReportInfo:(id)a0;
- (void)startResourcePreparing;
- (void)startResourceLoading;
- (void)finishResourceLoading;
- (void)startResourceParsingWithPinToken:(id)a0;
- (void)finishResourceParsingWithPinToken:(id)a0;
- (void)checkResourcePreparingFinishWithPinToken:(id)a0;
- (void)finishResourcePreparingWithPinToken:(id)a0;
- (BOOL)checkResourcePrepared;
- (BOOL)isAllResourcesPrepared;
- (long long)getAllResourcesState;
- (long long)getAllOriginalResourcesState;
- (id)getAllOriginalResDownloadResultDict;
- (id)getAllResParseErrorDict;
- (void)onLiveKTVSongResourcesLoaded:(BOOL)a0 songId:(id)a1 resources:(id)a2 requireSongResTypes:(unsigned long long)a3;
- (void)cacheResourcesIfNeed:(id)a0;
- (void)parseResourcesIfNeed:(id)a0 pinToken:(id)a1;
- (void)updateResParseResult:(id)a0 resType:(unsigned int)a1;
- (void)checkResourcesParsingFinishWithPinToken:(id)a0;
- (id)baseResourceDir;
- (void).cxx_destruct;

@end
