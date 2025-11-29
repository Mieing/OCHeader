@class NSMutableArray, BaseResponse;

@interface GetVUserInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int vuserCount;
@property (retain, nonatomic) NSMutableArray *vuserList;

+ (void)initialize;

@end
