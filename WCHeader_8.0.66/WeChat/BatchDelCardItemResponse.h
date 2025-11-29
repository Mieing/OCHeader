@class NSMutableArray, BaseResponse;

@interface BatchDelCardItemResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *succCardIds;

+ (void)initialize;

@end
