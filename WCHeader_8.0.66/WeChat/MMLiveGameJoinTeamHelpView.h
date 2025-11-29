@class MMUIButton, MMUILabel, UIView;
@protocol MMLiveGameJoinTeamHelpViewDelegate;

@interface MMLiveGameJoinTeamHelpView : MMPageSheetBaseView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *topAreaView;
@property (retain, nonatomic) MMUIButton *leftButton;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *helperLabel;
@property (nonatomic) BOOL model;
@property (weak, nonatomic) id<MMLiveGameJoinTeamHelpViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 model:(BOOL)a1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)pageSheetWillClose:(BOOL)a0;
- (void)leftButtonAction;
- (void).cxx_destruct;

@end
