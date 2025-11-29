@class NSString;

@interface ComonPromptInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *promptText;
@property (retain, nonatomic) NSString *jumpText;
@property (nonatomic) unsigned int jumpType;
@property (retain, nonatomic) NSString *jumpUrl;
@property (retain, nonatomic) NSString *tinyappUsername;
@property (nonatomic) unsigned int cgiType;

+ (void)initialize;

@end
