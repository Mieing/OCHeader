@class UIButton, NSString, DUXActionPopover;
@protocol AWEUserListGeneralCellConfigProtocol;

@interface AWEUserListGeneralCellMoreActionView : UIView <AWEUserListGeneralCellComponentProtocol>

@property (weak, nonatomic) id<AWEUserListGeneralCellConfigProtocol> config;
@property (retain, nonatomic) UIButton *moreActionButton;
@property (weak, nonatomic) DUXActionPopover *popover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onButtonClicked;
- (void)initView;
- (void)showPopoverWithTargetView:(id)a0 actions:(id)a1;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
