@interface TIMXOConversationUnreadCountModel : NSObject {
    int _unreadCount;
    int _unreadMentionedCount;
}

- (id)copy;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
