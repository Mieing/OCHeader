@class NSString, NewLifeActionPlatformProto;

@interface NewLifeActionResponse : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *cmdId;
@property (nonatomic) unsigned int errCode;
@property (retain, nonatomic) NSString *errMsg;
@property (retain, nonatomic) NewLifeActionPlatformProto *proto;

+ (void)initialize;

@end
