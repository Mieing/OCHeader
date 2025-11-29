@class NSData, NSMutableArray, BaseResponse;

@interface TextStatusGetSelfLikedsResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *likeds;
@property (retain, nonatomic) NSData *context;
@property (nonatomic) BOOL continueFlag;
@property (retain, nonatomic) NSMutableArray *referenceds;

+ (void)initialize;

@end
