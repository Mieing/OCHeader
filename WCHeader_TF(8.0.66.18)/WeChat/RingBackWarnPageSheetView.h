@class UIButton, MMUILabel, UIView;
@protocol RingRecommendSwitchDelegate;

@interface RingBackWarnPageSheetView : MMPageSheetBaseView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *customizedContentView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *messageLabel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *acceptButton;
@property (weak, nonatomic) id<RingRecommendSwitchDelegate> delegate;

- (id)init;
- (void)initView;
- (void)cancelButtonDidClick:(id)a0;
- (void)acceptButtonDidClick:(id)a0;
- (void).cxx_destruct;

@end
