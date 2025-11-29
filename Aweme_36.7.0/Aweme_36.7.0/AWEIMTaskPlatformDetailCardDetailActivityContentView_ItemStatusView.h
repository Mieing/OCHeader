@class UILabel, NSString, UIView;

@interface AWEIMTaskPlatformDetailCardDetailActivityContentView_ItemStatusView : UIView <AWEIMRendererProtocol>

@property (retain, nonatomic) UIView *stateBackgroundView;
@property (retain, nonatomic) UILabel *stateLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderModel:(id)a0 context:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
