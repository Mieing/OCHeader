@class NSMutableArray, BaseResponse;

@interface SearchRingBackResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) BOOL continueFlag;
@property (retain, nonatomic) NSMutableArray *infos;

+ (void)initialize;

@end
