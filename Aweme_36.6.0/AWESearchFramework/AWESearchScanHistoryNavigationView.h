@class UIButton, UILabel, UIView;

@interface AWESearchScanHistoryNavigationView : UIView

@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *clearAllButton;
@property (retain, nonatomic) UIButton *completeButton;
@property (retain, nonatomic) UIView *topBarView;
@property (nonatomic) BOOL deleteIconDidTapped;
@property (copy, nonatomic) id /* block */ clearAllButtonTapCallback;
@property (copy, nonatomic) id /* block */ trackDeleteEvent;

- (void)configUI;
- (void)clearAllButtonTapped;
- (void)trackClearButtonTapEventWithIconName:(id)a0;
- (void)completeButtonTapped;
- (void)hiddenDeleteIcon;
- (void)hiddenClearAllButton;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)deleteButtonTapped;

@end
