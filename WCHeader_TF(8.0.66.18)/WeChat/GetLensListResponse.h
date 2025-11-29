@class NSData, NSMutableArray, BaseResponse;

@interface GetLensListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *pageBuff;
@property (retain, nonatomic) NSMutableArray *lensList;

+ (void)initialize;

@end
