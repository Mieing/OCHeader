@class NSData, NSMutableArray, BaseResponse;

@interface StatusGetSelfReceiveLikeListResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *likedDataList;
@property (retain, nonatomic) NSData *context;
@property (nonatomic) BOOL continueFlag;
@property (retain, nonatomic) NSMutableArray *referencedDataList;

+ (void)initialize;

@end
