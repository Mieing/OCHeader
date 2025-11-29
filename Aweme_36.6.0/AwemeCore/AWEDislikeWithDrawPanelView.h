@class UIImageView, DUXButton, UILabel, UIView;
@protocol AWEDislikeWithDrawPanelDelegate;

@interface AWEDislikeWithDrawPanelView : UIView

@property (weak, nonatomic) id<AWEDislikeWithDrawPanelDelegate> delegate;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIImageView *dislikeImageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UILabel *subTextLabel;
@property (retain, nonatomic) DUXButton *cancelButton;

- (void)cancelButtonDidClick;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
