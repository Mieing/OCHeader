@class NSString, FinderLiveContact;

@interface FinderLiveKtvPlayMember : WXPBGeneratedMessage

@property (retain, nonatomic) FinderLiveContact *liveContact;
@property (nonatomic) unsigned int playSize;
@property (nonatomic) unsigned int playAvgScores;
@property (retain, nonatomic) NSString *bestPlaySongName;
@property (retain, nonatomic) NSString *bestPlayLevel;
@property (nonatomic) BOOL bestPlayOnlySingSegment;

+ (void)initialize;

@end
