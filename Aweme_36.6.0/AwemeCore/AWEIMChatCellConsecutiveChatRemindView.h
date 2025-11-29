@class UIButton;
@protocol AWEIMChatCellConsecutiveChatRemindViewDelegate;

@interface AWEIMChatCellConsecutiveChatRemindView : UIView

@property (retain, nonatomic) UIButton *remindBtn;
@property (weak, nonatomic) id<AWEIMChatCellConsecutiveChatRemindViewDelegate> delegate;

- (void)p_setupView;
- (void)p_clickConsecutiveChatRemindBtn;
- (void).cxx_destruct;
- (id)init;

@end
