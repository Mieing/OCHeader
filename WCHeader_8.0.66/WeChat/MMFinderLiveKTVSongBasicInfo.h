@class NSString, MMFinderLiveKtvSongSegmentInfo;

@interface MMFinderLiveKTVSongBasicInfo : NSObject

@property (retain, nonatomic) NSString *songId;
@property (retain, nonatomic) NSString *songName;
@property (retain, nonatomic) NSString *artistId;
@property (retain, nonatomic) NSString *artistName;
@property (retain, nonatomic) NSString *durationStr;
@property (nonatomic) int duration;
@property (retain, nonatomic) NSString *coverName;
@property (nonatomic) int hasNote;
@property (nonatomic) int hasSongFileid;
@property (nonatomic) int hasAdded;
@property (retain, nonatomic) NSString *liveRoomCover;
@property (retain, nonatomic) MMFinderLiveKtvSongSegmentInfo *segment;
@property (nonatomic) BOOL onlySingSegment;

+ (void)buildSongBasicInfo:(id)a0 withBasicInfo:(id)a1;

- (void).cxx_destruct;

@end
