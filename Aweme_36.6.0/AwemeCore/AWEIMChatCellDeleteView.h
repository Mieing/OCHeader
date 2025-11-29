@class UIButton;
@protocol AWEIMChatCellDeleteDelegate;

@interface AWEIMChatCellDeleteView : UIView

@property (retain, nonatomic) UIButton *deleteBtn;
@property (weak, nonatomic) id<AWEIMChatCellDeleteDelegate> delegate;

- (void)p_setupView;
- (void)didClickDeleteIcon;
- (void).cxx_destruct;
- (id)init;

@end
