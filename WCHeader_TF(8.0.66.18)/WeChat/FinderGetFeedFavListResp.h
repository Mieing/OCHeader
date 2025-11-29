@class NSData, ThankRedPackageInfo, NSMutableArray, BaseResponse;

@interface FinderGetFeedFavListResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *favList;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (nonatomic) unsigned int totalCount;
@property (nonatomic) unsigned int anonymousFingerlikeCount;
@property (nonatomic) unsigned int fromSnsFingerlikeCount;
@property (nonatomic) unsigned int fromCommentFingerlikeCount;
@property (retain, nonatomic) ThankRedPackageInfo *redpackageInfo;
@property (nonatomic) unsigned int fromMySnsFingerlikeCount;

+ (void)initialize;

@end
