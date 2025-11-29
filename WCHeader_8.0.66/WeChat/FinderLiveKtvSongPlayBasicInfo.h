@class NSString, FinderLiveKtvSongSegmentInfo;

@interface FinderLiveKtvSongPlayBasicInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *songMid;
@property (retain, nonatomic) NSString *songName;
@property (retain, nonatomic) NSString *singerMid;
@property (retain, nonatomic) NSString *singerName;
@property (nonatomic) int duration;
@property (retain, nonatomic) NSString *cover;
@property (nonatomic) int hasNote;
@property (nonatomic) int hasSongFileid;
@property (nonatomic) int hasAdded;
@property (retain, nonatomic) FinderLiveKtvSongSegmentInfo *segmentInfo;
@property (nonatomic) BOOL onlySingSegment;
@property (retain, nonatomic) NSString *liveRoomCover;

+ (void)initialize;

@end
