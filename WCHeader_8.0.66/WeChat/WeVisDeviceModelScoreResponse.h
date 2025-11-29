@class NSString, NSMutableArray, BaseResponse;

@interface WeVisDeviceModelScoreResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *configList;
@property (retain, nonatomic) NSString *needRunScore;

+ (void)initialize;

@end
