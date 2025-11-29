@class NSMutableArray, BaseResponse;

@interface GetHistoryRingBackResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) BOOL continueFlag;
@property (retain, nonatomic) NSMutableArray *infos;

+ (void)initialize;

@end
