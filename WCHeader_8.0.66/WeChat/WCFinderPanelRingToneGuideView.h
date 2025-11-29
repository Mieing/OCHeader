@class UIImageView, WCFinderFeedContentVM, UILabel, MMLiveIconButton;
@protocol WCFinderPanelRingToneGuideViewDelegate;

@interface WCFinderPanelRingToneGuideView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) MMLiveIconButton *actionButton;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (weak, nonatomic) id<WCFinderPanelRingToneGuideViewDelegate> delegate;

+ (double)defaultHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithContentVM:(id)a0;
- (void)layoutSubviews;
- (void)onClickActionButton;
- (void)onGlobalRingModified:(id)a0 opType:(unsigned long long)a1;
- (void)onFeedOriginalSoundInfoChanged:(id)a0;
- (void).cxx_destruct;

@end
