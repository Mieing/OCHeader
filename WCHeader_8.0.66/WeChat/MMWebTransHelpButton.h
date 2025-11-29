@class UIImageView, UILabel, MMUIButton, UIView;
@protocol WebTransHelpButtonDelegate;

@interface MMWebTransHelpButton : UIView

@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) MMUIButton *button;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *imageIconView;
@property (retain, nonatomic) UIImageView *imageArrowView;
@property (nonatomic) long long btnViewStatus;
@property (weak, nonatomic) id<WebTransHelpButtonDelegate> delegate;

- (id)init;
- (void)interalInit;
- (void)switchToTransView;
- (void)switchToRevertView;
- (void)switchToRevertViewWithTitle:(id)a0;
- (void)setMPColor;
- (void)setWebColor;
- (void)setNoteColor;
- (void)layoutSubviews;
- (void)triggerDelegate;
- (void).cxx_destruct;

@end
