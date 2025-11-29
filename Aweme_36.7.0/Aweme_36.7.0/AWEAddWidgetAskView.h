@class NSString, UIImageView, AWEAddWidgetAskModel, UIView, UILabel, UIButton;

@interface AWEAddWidgetAskView : UIView

@property (retain, nonatomic) AWEAddWidgetAskModel *model;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *overlayView;
@property (retain, nonatomic) UIImageView *contentImageView;
@property (retain, nonatomic) UILabel *mainDescLabel;
@property (retain, nonatomic) UILabel *detailDescLabel;
@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (copy, nonatomic) NSString *widgetType;

- (void)overlayViewTapAction:(id)a0;
- (void)trackAskViewShow;
- (void)trackAskViewClickWithAction:(id)a0;
- (void)clickToClose:(id)a0;
- (void)leftButtonTap:(id)a0;
- (void)rightButtonTap:(id)a0;
- (void)showWithContainer:(id)a0 useMask:(BOOL)a1;
- (void)setupSubViews;
- (void)close;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
