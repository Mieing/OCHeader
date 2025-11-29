@class BaseRequest;

@interface ExtFunctionSwitchRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int opCode;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned long long whichExtFunctionSwitch;
@property (nonatomic) unsigned long long extFunctionSwitchValue;
@property (nonatomic) unsigned long long whichExtFunctionSwitch2;
@property (nonatomic) unsigned long long extFunctionSwitchValue2;

+ (void)initialize;

@end
