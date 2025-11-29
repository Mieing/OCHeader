@class AWEIMTaskCardListCellItem, NSAttributedString;

@interface AWEIMTaskCardChatModel : AWEIMChatModel

@property (retain, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) AWEIMTaskCardListCellItem *taskCardItem;
@property (nonatomic) long long originUnreadCount;

- (void)dealloc;
- (void)__updateUnreadCount;
- (void).cxx_destruct;
- (id)init;

@end
