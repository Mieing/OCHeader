@class NSMutableArray, BaseResponse;

@interface GetReddotSignatureConfResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *sigConfList;

+ (void)initialize;

@end
