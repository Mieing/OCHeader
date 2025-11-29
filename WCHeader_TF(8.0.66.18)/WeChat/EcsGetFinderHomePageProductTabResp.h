@class NSData, NSMutableArray, BaseResponse;

@interface EcsGetFinderHomePageProductTabResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *products;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL continueFlag;

+ (void)initialize;

@end
