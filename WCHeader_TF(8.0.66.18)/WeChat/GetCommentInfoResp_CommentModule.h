@class NSString, GetCommentInfoResp_CommentModule_InviteInfo, GetCommentInfoResp_AppRecommendInfoList;

@interface GetCommentInfoResp_CommentModule : WXPBGeneratedMessage

@property (nonatomic) unsigned int showProfile;
@property (nonatomic) unsigned int showMenu;
@property (retain, nonatomic) NSString *nameText;
@property (retain, nonatomic) NSString *nameImgUrl;
@property (retain, nonatomic) NSString *nameImgUrlBlack;
@property (retain, nonatomic) NSString *scoreStr;
@property (nonatomic) unsigned int scoreNum;
@property (retain, nonatomic) NSString *recommend;
@property (retain, nonatomic) NSString *morePath;
@property (retain, nonatomic) NSString *moreQuery;
@property (retain, nonatomic) NSString *moreAppid;
@property (retain, nonatomic) NSString *moreText;
@property (retain, nonatomic) NSString *noScoreText;
@property (retain, nonatomic) GetCommentInfoResp_CommentModule_InviteInfo *inviteInfo;
@property (retain, nonatomic) GetCommentInfoResp_AppRecommendInfoList *recommendList;
@property (retain, nonatomic) NSString *lowScoreText;

+ (void)initialize;

@end
