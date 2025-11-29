@class NSMutableArray, BaseResponse;

@interface BatchCheckMd5Response : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *fileidToAeskey;

+ (void)initialize;

@end
