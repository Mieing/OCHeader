@class NSData, NSString, NSMutableArray;

@interface MMListenUniCommentBypassMessage_ClientInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int currScene;
@property (retain, nonatomic) NSData *exploreSessions;
@property (retain, nonatomic) NSData *currCategorySession;
@property (nonatomic) int isPanelOperate;
@property (retain, nonatomic) NSString *currListenId;
@property (retain, nonatomic) NSString *currBaseListenId;
@property (retain, nonatomic) NSMutableArray *commendLikeUsernameList;
@property (retain, nonatomic) NSMutableArray *displayCommendLikeUsernameList;
@property (nonatomic) int commendLikeUsernameListCnt;
@property (nonatomic) int displayCommendLikeUsernameListCnt;
@property (retain, nonatomic) NSString *fromCategoryId;

+ (void)initialize;

@end
