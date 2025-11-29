@class UIButton, NSArray, NSString, UIImage, UILabel, UIView, UIScrollView;
@protocol AWESharePanelViewDelegate;

@interface AWESharePanelView : UIView

@property (nonatomic, getter=isDark) BOOL dark;
@property (retain, nonatomic) NSArray *platforms;
@property (retain, nonatomic) UIView *blurView;
@property (retain, nonatomic) UIView *shareTitleContainerView;
@property (retain, nonatomic) UILabel *shareHintLabel;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *scrollViewLeadingContentOffsetView;
@property (retain, nonatomic) UIView *cancelButtonContainerView;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) NSArray *itemViews;
@property (weak, nonatomic) id<AWESharePanelViewDelegate> delegate;
@property (nonatomic) double scrollViewLeadingContentOffset;
@property (retain, nonatomic) UIImage *customLocalSaveImage;
@property (copy, nonatomic) NSString *customLocalSaveTitle;

- (id)initWithPlatforms:(id)a0 isDark:(BOOL)a1;
- (void)setupPanel;
- (id)p_maskLayerForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayoutForHotSearch;
- (void)updateLayoutWithTargetType:(unsigned long long)a0;
- (void)p_configShareItems;
- (id)p_imageForShareType:(long long)a0;
- (id)p_titleForShareType:(long long)a0;
- (void)onTapShareItem:(id)a0;
- (void)onTapCancelButton:(id)a0;
- (void)resetScrollViewLeadingContentOffsetAnimated:(BOOL)a0;
- (void).cxx_destruct;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
