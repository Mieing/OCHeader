@class NSMutableArray, BaseResponse;

@interface GetServiceNotifyOptionsResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) BOOL globalSwitch;
@property (retain, nonatomic) NSMutableArray *wxaOptions;
@property (nonatomic) BOOL customSessionGlobalSwitch;
@property (retain, nonatomic) NSMutableArray *customSessionWxaOptions;
@property (retain, nonatomic) NSMutableArray *bizOptions;
@property (nonatomic) unsigned int wxaOptionsTotal;
@property (nonatomic) unsigned int bizOptionsTotal;
@property (nonatomic) unsigned int wxaSubscribeAudioSwitch;

+ (void)initialize;

@end
