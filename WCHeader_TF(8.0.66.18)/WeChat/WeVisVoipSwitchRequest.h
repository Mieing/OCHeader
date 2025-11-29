@class BaseRequest, NSString, NSMutableArray;

@interface WeVisVoipSwitchRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int sdkversion;
@property (retain, nonatomic) NSString *phonemodel;
@property (retain, nonatomic) NSMutableArray *localConfigList;

+ (void)initialize;

@end
