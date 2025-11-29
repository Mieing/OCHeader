@class NSString, NSData;

@interface WARemoteDebug_CustomMessage : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *method;
@property (retain, nonatomic) NSString *payload;
@property (retain, nonatomic) NSData *raw;

+ (void)initialize;

@end
