@class NSString, NSData;

@interface WxFunctionCallInput : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *callId;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *arguments;
@property (retain, nonatomic) NSData *context;

+ (void)initialize;

@end
