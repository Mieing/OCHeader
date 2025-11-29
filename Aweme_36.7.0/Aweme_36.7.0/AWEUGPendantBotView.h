@class UILabel, NSString, UIView;

@interface AWEUGPendantBotView : UIView <AWEUGPendantBottomProtocol>

@property (retain, nonatomic) UIView *shadowView;
@property (retain, nonatomic) UILabel *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 text:(id)a1;

@end
