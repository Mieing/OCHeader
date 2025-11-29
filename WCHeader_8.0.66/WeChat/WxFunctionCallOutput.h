@class NSString, NSData;

@interface WxFunctionCallOutput : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *callId;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *output;
@property (retain, nonatomic) NSData *context;

+ (void)initialize;

@end
