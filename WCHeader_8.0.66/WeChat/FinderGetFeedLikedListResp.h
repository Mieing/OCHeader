@class NSData, ThankRedPackageInfo, NSMutableArray, BaseResponse;

@interface FinderGetFeedLikedListResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *likeList;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (nonatomic) unsigned int totalCount;
@property (retain, nonatomic) ThankRedPackageInfo *redpackageInfo;

+ (void)initialize;

@end
