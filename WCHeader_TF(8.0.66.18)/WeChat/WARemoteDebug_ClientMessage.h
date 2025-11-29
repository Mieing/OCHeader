@class NSString, NSData;

@interface WARemoteDebug_ClientMessage : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *method;
@property (retain, nonatomic) NSString *payload;
@property (retain, nonatomic) NSData *raw;

+ (void)initialize;

@end
