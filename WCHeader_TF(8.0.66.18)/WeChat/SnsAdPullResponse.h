@class NSMutableArray, BaseResponse;

@interface SnsAdPullResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *advertiseList;

+ (void)initialize;

@end
