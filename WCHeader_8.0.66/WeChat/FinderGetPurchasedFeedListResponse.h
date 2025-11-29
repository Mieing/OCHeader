@class NSData, NSMutableArray, BaseResponse;

@interface FinderGetPurchasedFeedListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *objects;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (nonatomic) unsigned int purchasedCount;

+ (void)initialize;

@end
