@class BaseRequest, NSString;

@interface DrawLotteryRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *drawLotteryParams;
@property (nonatomic) unsigned int drayLotteryType;

+ (void)initialize;

@end
