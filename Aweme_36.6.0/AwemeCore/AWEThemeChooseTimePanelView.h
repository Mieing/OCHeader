@class AWEThemeItemView, AWEThemeChooseTimePickerView, CAShapeLayer, UIView, AWEThemeChooseTimeModel, NSString;
@protocol AWEThemeChooseTimePanelViewDelegate;

@interface AWEThemeChooseTimePanelView : UIView <AWEThemeChooseTimePickerViewDeleagte>

@property (retain, nonatomic) UIView *mainView;
@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) AWEThemeItemView *systemThemeView;
@property (retain, nonatomic) AWEThemeItemView *customThemeView;
@property (retain, nonatomic) UIView *topTipView;
@property (retain, nonatomic) UIView *topCloseView;
@property (retain, nonatomic) AWEThemeItemView *selectedView;
@property (retain, nonatomic) AWEThemeItemView *lightTimeView;
@property (retain, nonatomic) AWEThemeItemView *darkTimeView;
@property (retain, nonatomic) UIView *lightTimeSelectView;
@property (retain, nonatomic) UIView *darkTimeSelectView;
@property (retain, nonatomic) UIView *showTimeSelectView;
@property (retain, nonatomic) UIView *bottomTopLineView;
@property (nonatomic, getter=isShowBottomV) BOOL showBottomV;
@property (retain, nonatomic) AWEThemeChooseTimePickerView *darkPickerView;
@property (retain, nonatomic) AWEThemeChooseTimePickerView *lightPickerView;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (weak, nonatomic) id<AWEThemeChooseTimePanelViewDelegate> delegate;
@property (retain, nonatomic) AWEThemeChooseTimeModel *darkTime;
@property (retain, nonatomic) AWEThemeChooseTimeModel *lightTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setUpTopView;
- (void)setUpBottomView;
- (void)setChooseTimePanelViewHideen:(BOOL)a0 animation:(BOOL)a1;
- (void)mainViewDidClick;
- (void)bottomViewDidClick;
- (void)updateBottomViewWithAnimation:(BOOL)a0;
- (void)systemThemeViewDidClick;
- (void)customThemeViewDidClick;
- (void)topCloseViewDidSwipe;
- (void)setUpDarkTimePickerView;
- (void)setUpLightTimePickerView;
- (void)darkTimeViewDidClick;
- (void)lightTimeViewDidClick;
- (void)setShowTimeSelectView:(id)a0 animation:(BOOL)a1;
- (void)systemThemeViewDidClickWithAnimation:(BOOL)a0;
- (void)customThemeViewDidClickWithAnimation:(BOOL)a0;
- (id)p_calculateOtherHalfTime:(id)a0;
- (void)themeChooseTimePickerViewsDidSelectTime:(id)a0 themeChooseTimePickerView:(id)a1;
- (void)checkUesrLoaclCustom;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)createUI;

@end
