@interface WeChatTabRedDotStruct : NSObject

@property (nonatomic) unsigned int tabIndex;
@property (nonatomic) BOOL isBadgeAtTab;
@property (nonatomic) unsigned long long unread;
@property (nonatomic) BOOL hadNoteInfo;

- (id)initWithIndex:(unsigned int)a0;
- (id)description;

@end
