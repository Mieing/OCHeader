@class UIView, NSString, TextStatePublishReportObject, TextStatePublishRecentUseIconView, TextStatePublishOfficialIconCollectionView, TextStateEmojiBoardView, TextStateEmojiBoardReportObject, CAGradientLayer, TextStatePublishCustomIconView, TextStatePublishCustomIconPanelReportObject, TextStatePublishIconList;
@protocol TextStatePublishCustomIconViewDelegate;

@interface TextStatePublishIconPickerView : UIScrollView <TextStatePublishCustomIconViewDelegate, TextStatePublishRecentUseIconViewDelegate, TextStatePublishOfficialIconCollectionViewDelegate, TextStateEmojiBoardViewDelegate, UIScrollViewDelegate, TextStateMgrExt, TextStatePublishIconPicker>

@property (nonatomic) unsigned long long components;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *sideView;
@property (retain, nonatomic) TextStatePublishCustomIconView *customIconView;
@property (retain, nonatomic) TextStatePublishRecentUseIconView *recentUseIconView;
@property (retain, nonatomic) TextStatePublishOfficialIconCollectionView *recommendIconView;
@property (retain, nonatomic) TextStateEmojiBoardView *emojiBoardView;
@property (retain, nonatomic) CAGradientLayer *gradientMaskLayer;
@property (weak, nonatomic) id<TextStatePublishCustomIconViewDelegate> customIconViewDelegate;
@property (retain, nonatomic) TextStatePublishReportObject *reportObject;
@property (retain, nonatomic) TextStateEmojiBoardReportObject *emojiBoardReportObject;
@property (retain, nonatomic) TextStatePublishCustomIconPanelReportObject *customIconPanelReportObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) TextStatePublishIconList *publishIconList;
@property (copy, nonatomic) id /* block */ iconPickHandler;

- (id)initWithComponents:(unsigned long long)a0;
- (void)initSubviews;
- (void)initGradientLayer;
- (void)updateGradientLayer;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayout;
- (double)customIconExpandHeight;
- (void)resetToTop;
- (void)refresh;
- (BOOL)enableDragToClose;
- (void)shrinkCustomIconViewIfNeeded;
- (BOOL)shrinkCustomIconView:(id)a0;
- (void)onTapNonexpandedView:(id)a0;
- (void)onTapCancelButton:(id)a0;
- (void)onTapDoneButton:(id)a0;
- (void)onTapSwitchIconButton:(id)a0;
- (void)onTextExceedMaxLength:(id)a0;
- (void)onDescrpitionTextDidBeginEditing:(id)a0;
- (void)onSwitchIconButtonSelected:(BOOL)a0 customIconView:(id)a1;
- (id)autoReplacedIconWithDescription:(id)a0;
- (void)onDescTextShouldRequestRecommend:(id)a0;
- (void)onEmojiBoardItemSelected:(id)a0 groupDescription:(id)a1 iconSelectFrom:(long long)a2;
- (id)getCurrentInputCustomIconDesc;
- (void)showEmojiBoardWithAnimation;
- (void)hideEmojiBoardWithAnimation;
- (void)onSelectOfficialIcon:(id)a0;
- (void)onSelectRecentUseIcon:(id)a0;
- (void)onRecentUseIconListCleared;
- (void)scrollViewDidScroll:(id)a0;
- (void)onTextStateIconUpdate;
- (id)getSdkPublishEventReportParams:(id)a0;
- (void)reportCustomIconPanelExpand;
- (void)reportCustomIconPanelShrinkIfNeed;
- (void).cxx_destruct;

@end
