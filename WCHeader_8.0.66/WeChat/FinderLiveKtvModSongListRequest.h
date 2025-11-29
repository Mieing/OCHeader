@class FinderLiveKtvModUserInfo, BaseRequest, NSString, NSData, FinderBaseRequest, FinderLiveKtvSongReportInfo, FinderLiveKtvSongInfo;

@interface FinderLiveKtvModSongListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *anchorFinderUsername;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int modType;
@property (retain, nonatomic) FinderLiveKtvSongInfo *songInfo;
@property (retain, nonatomic) FinderLiveKtvModUserInfo *userInfo;
@property (retain, nonatomic) FinderLiveKtvSongReportInfo *reportInfo;

+ (void)initialize;

@end
