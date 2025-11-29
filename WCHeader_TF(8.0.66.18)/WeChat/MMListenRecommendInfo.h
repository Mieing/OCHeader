@class MMListenRecommendInfo_Activity, NSString, NSData, MMListenRecommendInfo_ReviewInfo, MMListenRecommendInfo_ClientRecommendInfo, MMListenRecommendInfo_PlayableInfo, NSMutableArray, MMListenRecommendInfo_StatisticsData, MMListenRecommendInfo_LikeInfo, MMListenRecommendInfo_VipLimitFree, ClientSessionInfo;

@interface MMListenRecommendInfo : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSMutableArray *users;
@property (retain, nonatomic) NSString *recommendId;
@property (retain, nonatomic) NSData *recommendBuffer;
@property (retain, nonatomic) NSString *jumpCategoryId;
@property (retain, nonatomic) NSString *jumpCategoryName;
@property (nonatomic) int jumpCategoryType;
@property (nonatomic) BOOL isHideAfterClick;
@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (retain, nonatomic) NSString *globalDesc;
@property (retain, nonatomic) MMListenRecommendInfo_Activity *activity;
@property (retain, nonatomic) MMListenRecommendInfo_StatisticsData *statData;
@property (retain, nonatomic) NSString *feedidlistUniqueId;
@property (retain, nonatomic) NSMutableArray *newDescList;
@property (retain, nonatomic) MMListenRecommendInfo_VipLimitFree *vipLimitFree;
@property (retain, nonatomic) NSString *audioCtxBuffer;
@property (retain, nonatomic) ClientSessionInfo *clientSessionInfo;
@property (retain, nonatomic) NSString *circleSessionId;
@property (nonatomic) int circleOffset;
@property (retain, nonatomic) MMListenRecommendInfo_ReviewInfo *reviewInfo;
@property (nonatomic) BOOL showReddot;
@property (retain, nonatomic) NSData *reddotContextBuffer;
@property (retain, nonatomic) NSData *reddotClientBuffer;
@property (nonatomic) BOOL isPinned;
@property (retain, nonatomic) MMListenRecommendInfo_ClientRecommendInfo *clientRecommendInfo;
@property (retain, nonatomic) MMListenRecommendInfo_PlayableInfo *playableInfo;
@property (retain, nonatomic) NSData *musicGlobalContextBuffer;
@property (retain, nonatomic) MMListenRecommendInfo_LikeInfo *likeInfo;
@property (retain, nonatomic) NSData *clientReportInfo;
@property (retain, nonatomic) NSString *audioCategoryId;
@property (nonatomic) BOOL isHitSong;
@property (retain, nonatomic) NSString *feedbackRecommendCtx;

+ (void)initialize;

- (BOOL)shouldShowFriendRecommend;
- (id)friendRecommendReasonLabelStr;
- (id)friendRecommendReasonLabelStrWithoutTime;
- (id)firstUserNickNameRichText;
- (id)rawRecommendReasonLabelStrForAudio;
- (id)socialRecommendReasonLabelStr;
- (id)friendRecommendUserListLabelStr;
- (BOOL)shouldShowJumpCategoryEntry;
- (id)jumpCategoryEntryStr;

@end
