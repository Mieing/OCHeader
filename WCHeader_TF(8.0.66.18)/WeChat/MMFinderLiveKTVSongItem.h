@class NSString, WCFinderContact, MMFinderLiveKtvSongSegmentInfo, FinderLiveKtvSongReportInfo, MMFinderLiveKTVSongBasicInfo, MMFinderLiveKTVSongResourceInfo, NSMutableArray, FinderLiveContact;

@interface MMFinderLiveKTVSongItem : NSObject

@property (retain, nonatomic) WCFinderContact *singlerContact;
@property (retain, nonatomic) MMFinderLiveKTVSongBasicInfo *basicInfo;
@property (retain, nonatomic) NSString *songName;
@property (retain, nonatomic) NSString *artistId;
@property (retain, nonatomic) NSString *artistName;
@property (retain, nonatomic) NSString *durationStr;
@property (nonatomic) int duration;
@property (retain, nonatomic) NSString *coverName;
@property (nonatomic) int hasNote;
@property (nonatomic) int hasSongFileid;
@property (nonatomic) int hasAdded;
@property (retain, nonatomic) MMFinderLiveKtvSongSegmentInfo *segment;
@property (nonatomic) BOOL onlySingSegment;
@property (retain, nonatomic) NSString *songId;
@property (retain, nonatomic) NSString *uniqueId;
@property (nonatomic) unsigned int songAddTime;
@property (nonatomic) unsigned int songPlayTime;
@property (nonatomic) unsigned int songFinishTime;
@property (retain, nonatomic) FinderLiveContact *liveContact;
@property (nonatomic) unsigned int status;
@property (nonatomic) BOOL pause;
@property (retain, nonatomic) NSString *level;
@property (nonatomic) unsigned int score;
@property (retain, nonatomic) NSString *micSdkUserId;
@property (nonatomic) long long singMode;
@property (retain, nonatomic) MMFinderLiveKTVSongResourceInfo *resourceInfo;
@property (retain, nonatomic) NSMutableArray *resources;
@property (nonatomic) int songQuality;
@property (nonatomic) int accompanyQuality;
@property (retain, nonatomic) FinderLiveKtvSongReportInfo *reportInfo;

+ (void)buildKTVSong:(id)a0 withBasicInfo:(id)a1;
+ (void)buildKTVSong:(id)a0 withResourceInfo:(id)a1;
+ (void)buildKTVSong:(id)a0 withPlayInfo:(id)a1;
+ (void)buildKTVSong:(id)a0 withSongInfo:(id)a1;
+ (void)buildKTVSong:(id)a0 withSongId:(id)a1 uniqueId:(id)a2 sdkUserId:(id)a3;
+ (BOOL)isSongItem:(id)a0 uniqueEqual:(id)a1;
+ (int)transferSingModeToSupportFlag:(long long)a0;
+ (long long)transferSupportFlagToSingMode:(int)a0;

- (BOOL)updateBasicInfo:(id)a0;
- (BOOL)updateSingerContact:(id)a0;
- (void)updateResourceInfo:(id)a0;
- (BOOL)isCriticalValid;
- (BOOL)hasResource:(unsigned int)a0;
- (BOOL)hasTrialResource;
- (id)description;
- (int)actualDuration;
- (void).cxx_destruct;

@end
