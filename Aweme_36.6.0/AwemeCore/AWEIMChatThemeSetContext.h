@class NSString, AWEIMChatBackgroundModel, NSNumber;

@interface AWEIMChatThemeSetContext : NSObject

@property (copy, nonatomic) NSString *conversationID;
@property (retain, nonatomic) AWEIMChatBackgroundModel *backgroundModel;
@property (nonatomic) BOOL shareToOthers;
@property (copy, nonatomic) NSString *themeKey;
@property (copy, nonatomic) NSString *from;
@property (retain, nonatomic) NSNumber *upgradeHasBackground;
@property (retain, nonatomic) NSNumber *upgradeIsCloseFriend;
@property (nonatomic) BOOL onlyBackground;

- (void).cxx_destruct;
- (id)initWithConversationID:(id)a0;

@end
