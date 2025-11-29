@class NSMutableArray, BaseResponse;

@interface GetABTestResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *experimentList;
@property (nonatomic) unsigned int internalTime;
@property (nonatomic) unsigned int timestamp;
@property (retain, nonatomic) NSMutableArray *expiredexpid;

+ (void)initialize;

@end
