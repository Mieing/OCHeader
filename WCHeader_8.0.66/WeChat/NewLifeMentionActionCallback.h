@class NSString;

@interface NewLifeMentionActionCallback : WXPBGeneratedMessage

@property (nonatomic) unsigned int actionType;
@property (retain, nonatomic) NSString *mentionUsername;
@property (retain, nonatomic) NSString *mentionNickname;

+ (void)initialize;

@end
