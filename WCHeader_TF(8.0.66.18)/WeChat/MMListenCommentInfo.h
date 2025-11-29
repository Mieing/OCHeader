@class MMListenMpCommentInfo, NSString, MMListenJumpInfo, MMListenExtShowInfo, MMListenFootprintInfo, MMListenRecommendInfo, NSMutableArray, MMListenCommentInfo_FeedbackInfo, MMListenDigitalAlbumInfo, MMListenMusicRewardInfo;

@interface MMListenCommentInfo : WXPBGeneratedMessage

@property (nonatomic) BOOL isLiked;
@property (nonatomic) BOOL isStar;
@property (nonatomic) int likeNum;
@property (nonatomic) int friendLikeNum;
@property (nonatomic) int shareNum;
@property (nonatomic) int listenNum;
@property (nonatomic) int commentNum;
@property (nonatomic) int starNum;
@property (retain, nonatomic) NSMutableArray *likeUsers;
@property (retain, nonatomic) NSMutableArray *featuredCommentList;
@property (nonatomic) unsigned long long commentSecureBits;
@property (retain, nonatomic) NSMutableArray *publicLikeUsers;
@property (retain, nonatomic) NSString *countWording;
@property (nonatomic) BOOL isSubscribed;
@property (retain, nonatomic) MMListenDigitalAlbumInfo *digitalAlbumInfo;
@property (nonatomic) BOOL isThumbUp;
@property (nonatomic) BOOL showAllLikeList;
@property (nonatomic) int thumbUpCount;
@property (retain, nonatomic) MMListenFootprintInfo *footprintInfo;
@property (retain, nonatomic) NSMutableArray *musicStories;
@property (retain, nonatomic) NSString *feedbackUrl;
@property (retain, nonatomic) MMListenJumpInfo *feedbackJumpInfo;
@property (nonatomic) BOOL hasCoverSong;
@property (retain, nonatomic) MMListenCommentInfo_FeedbackInfo *feedbackInfo;
@property (nonatomic) int commentType;
@property (retain, nonatomic) NSString *finderCommentAppname;
@property (retain, nonatomic) NSString *finderCommentEntityId;
@property (retain, nonatomic) NSString *tid;
@property (retain, nonatomic) NSString *nonceId;
@property (retain, nonatomic) NSString *statusBase64;
@property (retain, nonatomic) NSString *statusTailIconUrl;
@property (retain, nonatomic) NSString *statusTailIconText;
@property (retain, nonatomic) NSString *statusIconId;
@property (retain, nonatomic) NSString *statusCoverUrl;
@property (nonatomic) int recommendType;
@property (retain, nonatomic) NSString *recommendDesc;
@property (retain, nonatomic) NSMutableArray *recommendNewDescList;
@property (retain, nonatomic) MMListenRecommendInfo *recommendInfo;
@property (retain, nonatomic) NSString *debugUrl;
@property (nonatomic) unsigned long long audioOptionBits;
@property (retain, nonatomic) MMListenExtShowInfo *extShowInfo;
@property (retain, nonatomic) MMListenMusicRewardInfo *rewardInfo;
@property (retain, nonatomic) MMListenMpCommentInfo *mpCommentInfo;

+ (void)initialize;

- (id)categoryItemCommentInfoDesc;

@end
