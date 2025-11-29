@class CAGradientLayer, MMFinderLiveSubTitleViewModel, MMLiveTaskId, UIView, RichTextView, MMFinderLiveSubTitleModel;

@interface MMFinderLiveSubTitleView : UIView

@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIView *chnSubTitleAreaView;
@property (retain, nonatomic) UIView *engSubTitleAreaView;
@property (retain, nonatomic) RichTextView *chnSubTitleTextView;
@property (retain, nonatomic) RichTextView *engSubTitleTextView;
@property (retain, nonatomic) MMFinderLiveSubTitleModel *subTitleModel;
@property (retain, nonatomic) MMFinderLiveSubTitleViewModel *subTitleViewModel;
@property (nonatomic) BOOL hasContent;
@property (nonatomic) BOOL isLiveMinimized;
@property (readonly, nonatomic) BOOL enableDisplaySubTitle;
@property (nonatomic) double standardChnSubTitleLineHeight;
@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (readonly, nonatomic) BOOL hasStartSubTitleDisplay;
@property (readonly, nonatomic) BOOL isSubTitleClosed;
@property (readonly, nonatomic) BOOL isSubTitleDisabled;

+ (id)getCurrentChnSubTitleFont;
+ (id)getCurrentEngSubTitleFont;
+ (id)getCurrentChnSubTitleTextAttributeObj;
+ (id)getCurrentEngSubTitleTextAttributeObj;
+ (unsigned long long)getCurrentChnMaxLineNum;
+ (unsigned long long)getCurrentEngMaxLineNum;
+ (unsigned long long)getChnDisplayMode;
+ (unsigned long long)getEngDisplayMode;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutGradientView;
- (void)layoutChnSubTitleView;
- (void)layoutEngSubTitleView;
- (void)updateSubTitleAreaViewsOrigin;
- (void)updateSubTitleTextViewOrigin:(id)a0 refreshStyle:(unsigned long long)a1;
- (void)updateChnSubTitleTextViewOriginWithRefreshStyle:(unsigned long long)a0;
- (void)updateEngSubTitleTextViewOriginWithRefreshStyle:(unsigned long long)a0;
- (void)scrollSubTitleToBottomAnimated:(long long)a0;
- (void)onOrientationChanged;
- (double)preferHeightInDisplayScene:(unsigned long long)a0;
- (void)updateSubTitleClosed:(BOOL)a0;
- (void)updateSubTitleDisabled:(BOOL)a0;
- (void)onMinimizeStarted;
- (void)onMaximizeStarted;
- (unsigned long long)refreshSubTitle:(id)a0;
- (id)getSubTitleTextView:(long long)a0;
- (double)preferEngSubTitleAreaHeight;
- (double)preferChnSubTitleAreaHeight;
- (double)preferBottomInsetInDisplayScene:(unsigned long long)a0;
- (double)preferLeftRightInset;
- (void)createSubTitleModel;
- (id)getCurrentSubTitleUIConfigModel;
- (void)updateSubTitleUIConfigModel;
- (void)updateStandardChnSubTitleLineHeight;
- (void)updateDisplayAlpha;
- (void)setAlpha:(double)a0;
- (void).cxx_destruct;

@end
