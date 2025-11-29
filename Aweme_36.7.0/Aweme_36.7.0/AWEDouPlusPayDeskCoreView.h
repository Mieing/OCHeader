@class AWEDouPlusPayDeskModel, UIImageView, UILabel, UIButton;
@protocol AWEDouPlusPayDeskCoreViewDelegate;

@interface AWEDouPlusPayDeskCoreView : UIView

@property (retain, nonatomic) UIImageView *douplusIconView;
@property (retain, nonatomic) UILabel *douplusValueLabel;
@property (retain, nonatomic) UILabel *moneyLabel;
@property (retain, nonatomic) UILabel *orderNumberLabel;
@property (retain, nonatomic) UIButton *confirmBtn;
@property (retain, nonatomic) UILabel *promptLabel;
@property (nonatomic) long long sceneType;
@property (weak, nonatomic) id<AWEDouPlusPayDeskCoreViewDelegate> delegate;
@property (retain, nonatomic) AWEDouPlusPayDeskModel *dataModel;

- (void)updateSubViewsLayout;
- (void)confirmBtnClicked:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
