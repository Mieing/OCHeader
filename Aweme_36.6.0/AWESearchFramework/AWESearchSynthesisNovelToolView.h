@class AWESearchSynthesisNovelToolItemView, NSArray, AWESearchSynthesisNovelBookSettingConfig, UIView, NSString, AWESearchSynthesisNovelToolItem;

@interface AWESearchSynthesisNovelToolView : UIView <AWESearchSynthesisNovelToolItemViewDelegate>

@property (retain, nonatomic) AWESearchSynthesisNovelToolItemView *chapterView;
@property (retain, nonatomic) AWESearchSynthesisNovelToolItemView *darkModeView;
@property (retain, nonatomic) AWESearchSynthesisNovelToolItemView *settingView;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) AWESearchSynthesisNovelBookSettingConfig *configData;
@property (copy, nonatomic) NSArray *itemViews;
@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) AWESearchSynthesisNovelToolItem *categoryItem;
@property (retain, nonatomic) AWESearchSynthesisNovelToolItem *darkItem;
@property (retain, nonatomic) AWESearchSynthesisNovelToolItem *settingItem;
@property (nonatomic) long long selectIndex;
@property (copy, nonatomic) NSArray *items;
@property (nonatomic) double toolHeightExceptSafeArea;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showSelectView;
- (void)updateWithConfigData:(id)a0;
- (void)onBottomTooItemSelect:(id)a0;
- (void)hideSeparatorView:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)clearState;

@end
