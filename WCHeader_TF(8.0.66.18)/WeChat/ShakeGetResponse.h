@class NSString, NSMutableArray, BaseResponse;

@interface ShakeGetResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSMutableArray *shakeGetList;
@property (retain, nonatomic) NSString *tips;
@property (nonatomic) unsigned int scence;
@property (nonatomic) int ret;

+ (void)initialize;

@end
