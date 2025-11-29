@class BaseResponse;

@interface WecoinEntranceResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int showIncomeEntrance;

+ (void)initialize;

@end
