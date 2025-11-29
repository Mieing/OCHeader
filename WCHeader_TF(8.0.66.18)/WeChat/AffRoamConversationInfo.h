@class NSString;

@interface AffRoamConversationInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) unsigned long long conversationTime;
@property (nonatomic) unsigned long long conversationSize;
@property (nonatomic) BOOL isSelected;

+ (void)initialize;

@end
