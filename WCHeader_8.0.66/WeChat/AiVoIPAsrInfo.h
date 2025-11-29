@class NSString;

@interface AiVoIPAsrInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *openid;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) unsigned int role;
@property (nonatomic) BOOL isFinal;

+ (void)initialize;

@end
