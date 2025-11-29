@class MMUILabel, NSString, UIColor, UIFont, UIView, MMFinderLiveMusicSettingOperationBar, UIButton;

@interface MMFinderLiveMusicSettingOperationNavBar : UIView

@property (retain, nonatomic) UIButton *navLeftButton;
@property (retain, nonatomic) UIView *navRightButton;
@property (retain, nonatomic) MMUILabel *titleView;
@property (retain, nonatomic) MMUILabel *subtitleView;
@property (retain, nonatomic) MMFinderLiveMusicSettingOperationBar *settingOpertionBar;
@property (nonatomic) BOOL shouldAdaptToDarkLight;
@property (retain, nonatomic) NSString *noDataTitle;
@property (retain, nonatomic) NSString *dataLoadedTitle;
@property (retain, nonatomic) NSString *defaultTitle;
@property (retain, nonatomic) NSString *dataEditedTitle;
@property (retain, nonatomic) UIColor *editDoneButtonColor;
@property (retain, nonatomic) UIFont *customTitleFont;
@property (retain, nonatomic) UIFont *customSubTitleFont;
@property (nonatomic) BOOL hideRightViews;
@property (retain, nonatomic) NSString *normalSubtitle;
@property (retain, nonatomic) NSString *editingSubtitle;
@property (retain, nonatomic) NSString *noDataSubtitle;
@property (nonatomic) long long currentState;
@property (copy, nonatomic) id /* block */ leftButtonActionCallback;
@property (copy, nonatomic) id /* block */ rightButtonActionCallback;
@property (copy, nonatomic) id /* block */ addButtonActionCallback;
@property (copy, nonatomic) id /* block */ operationBarTapCallback;
@property (readonly, nonatomic) MMFinderLiveMusicSettingOperationBar *currentSettingOperationBar;

+ (double)preferHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 adaptDarkLight:(BOOL)a1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutSubTitleView;
- (void)layoutTitleView;
- (void)layoutNavLeftButton;
- (void)layoutNavRightButton;
- (void)updateUI;
- (id)getCurrentTitleView;
- (id)getCurrentSubTitleView;
- (id)getTitleLabelWithTitle:(id)a0;
- (id)getCurrentLeftButton;
- (id)getCurrentRightView;
- (id)createOperationBar;
- (void)leftButtonAction;
- (void)rightButtonAction;
- (void).cxx_destruct;

@end
