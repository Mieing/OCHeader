@interface TIMXPBNCSBConversationMarkReadEvent : GPBMessage

@property (nonatomic) int readBadgeCount;
@property (nonatomic) BOOL hasReadBadgeCount;
@property (nonatomic) int readImportantBadgeCount;
@property (nonatomic) BOOL hasReadImportantBadgeCount;

+ (id)descriptor;

@end
