@class NSString, NSMutableArray;

@interface WARemoteDebug_CallInterface : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *objName;
@property (retain, nonatomic) NSString *methodName;
@property (retain, nonatomic) NSMutableArray *methodArgList;
@property (nonatomic) unsigned int callId;

+ (void)initialize;

@end
