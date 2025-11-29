@class MMListenReportClientInfo, BaseRequest, NSString, MMListenAppreciateFriendInfo, MMListenThankUserInfo, MMListenMusicBaseRequest;

@interface MMListenLikeRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *listenId;
@property (retain, nonatomic) NSString *categoryId;
@property (nonatomic) BOOL isCancel;
@property (nonatomic) BOOL isPublic;
@property (nonatomic) int type;
@property (retain, nonatomic) MMListenAppreciateFriendInfo *appreciateFriendInfo;
@property (retain, nonatomic) NSString *finderFeedId;
@property (nonatomic) unsigned long long qqmusicSongId;
@property (retain, nonatomic) NSString *qqmusicMid;
@property (nonatomic) int appScene;
@property (nonatomic) int tingScene;
@property (retain, nonatomic) MMListenReportClientInfo *reportClientInfo;
@property (retain, nonatomic) NSString *likeDesc;
@property (retain, nonatomic) MMListenThankUserInfo *thankUserInfo;
@property (retain, nonatomic) MMListenMusicBaseRequest *musicBaseRequest;

+ (void)initialize;

@end
