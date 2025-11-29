@class UIImageView, UIView;
@protocol WCPayGPLaunchModeDetailViewDelegate;

@interface WCPayGPLaunchModeDetailView : UIView

@property (weak, nonatomic) id<WCPayGPLaunchModeDetailViewDelegate> delegate;
@property (retain, nonatomic) UIImageView *checkCommonAA;
@property (retain, nonatomic) UIImageView *checkActicityAA;
@property (retain, nonatomic) UIImageView *checkCustomizeAA;
@property (retain, nonatomic) UIView *commonAAView;
@property (retain, nonatomic) UIView *activityAAView;
@property (retain, nonatomic) UIView *customizeAAView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (void)updateCheckMarkStatusWithLaunchType:(unsigned long long)a0;
- (void)setupContentView;
- (id)getTitleLabel:(id)a0;
- (id)getDescLabel:(id)a0;
- (void)commonAAClick;
- (void)activityAAClick;
- (void)customizeAAClick;
- (void).cxx_destruct;

@end
