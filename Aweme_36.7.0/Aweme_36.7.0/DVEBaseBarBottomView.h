@class NSString, UILabel, UIView, UIButton;
@protocol DVEBaseBarBottomViewContext, DVEBaseBarBottomViewDelegate;

@interface DVEBaseBarBottomView : UIView <DVEBaseBarBottomViewContext>

@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) unsigned long long clickApplyToAllViewTimes;
@property (retain, nonatomic) UIButton *applyToAllButton;
@property (retain, nonatomic) UILabel *applyToAllLabel;
@property (weak, nonatomic) id<DVEBaseBarBottomViewDelegate> delegate;
@property (weak, nonatomic) id<DVEBaseBarBottomViewContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateApplyToAllLabelString:(id)a0;
- (long long)hasClickedApplyToAllView;
- (void)didTappedApplyToAllView:(id)a0;
- (void)updateLayoutAndStyleForUpgrade;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
