@class FinderMusicInfo, NSString, FinderMusicTopicTagInfo, MusicRelatedRecommendInfo, NSMutableArray;

@interface FinderMusicTopicInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long musicTopicId;
@property (retain, nonatomic) NSString *musicTopicName;
@property (retain, nonatomic) NSMutableArray *singers;
@property (retain, nonatomic) FinderMusicInfo *musicInfo;
@property (nonatomic) unsigned int feedCount;
@property (nonatomic) unsigned int readCount;
@property (retain, nonatomic) FinderMusicTopicTagInfo *tabInfo;
@property (retain, nonatomic) NSString *coverImgUrl;
@property (nonatomic) unsigned int favAvailableFlag;
@property (nonatomic) unsigned int favFlag;
@property (nonatomic) unsigned int recentReadCount;
@property (nonatomic) unsigned int readCountShowType;
@property (retain, nonatomic) NSString *miaojianSdkPrefix;
@property (nonatomic) unsigned long long listenSongId;
@property (nonatomic) unsigned int listenSongLikeFlag;
@property (nonatomic) unsigned int copyrightMark;
@property (nonatomic) unsigned int musicSourceType;
@property (retain, nonatomic) NSString *musicAudioId;
@property (retain, nonatomic) MusicRelatedRecommendInfo *relatedMusic;

+ (void)initialize;

@end
