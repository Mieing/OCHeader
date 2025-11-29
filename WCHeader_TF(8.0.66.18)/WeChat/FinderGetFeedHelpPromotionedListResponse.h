@class NSData, NSMutableArray, BaseResponse;

@interface FinderGetFeedHelpPromotionedListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *helpPromotionInfos;
@property (retain, nonatomic) NSData *lastBuff;
@property (nonatomic) BOOL continueFlag;
@property (nonatomic) unsigned int totalCount;

+ (void)initialize;

@end
