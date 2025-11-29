@class BaseResponse, NSString, FinderLiveGuideInfo, FinderLiveKtvPlayerWaitList, NSMutableArray, FinderLiveKtvSongInfo;

@interface FinderLiveKtvModSongListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderLiveKtvSongInfo *newAddSongInfo;
@property (retain, nonatomic) NSMutableArray *songInfoList;
@property (nonatomic) unsigned int firstSongVersion;
@property (nonatomic) unsigned int newAddSongIndex;
@property (retain, nonatomic) FinderLiveKtvPlayerWaitList *ktvPlayerWaitList;
@property (nonatomic) unsigned long long songListVersion;
@property (nonatomic) unsigned int selfWaitSongSize;
@property (retain, nonatomic) NSString *realnameUrl;
@property (nonatomic) unsigned int allWaitSongSize;
@property (retain, nonatomic) FinderLiveGuideInfo *guideInfo;

+ (void)initialize;

@end
