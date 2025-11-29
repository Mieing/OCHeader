@class WCFinderCommentEmoticonView, WCFinderComment, UIImageView, WCFinderInteractivePanelConfigParamsModel, UILabel, RichTextView, WCFinderCommentImageView;
@protocol WCFinderInteractiveImageCommentCarouselViewDelegate;

@interface WCFinderInteractiveImageCommentCarouselView : UIView

@property (retain, nonatomic) WCFinderCommentEmoticonView *emoticonView;
@property (retain, nonatomic) WCFinderCommentImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) RichTextView *textView;
@property (retain, nonatomic) WCFinderComment *comment;
@property (retain, nonatomic) WCFinderInteractivePanelConfigParamsModel *paramsModel;
@property (readonly, nonatomic) double carouselDuration;
@property (readonly, nonatomic) double carouselInterval;
@property (nonatomic) unsigned long long currentIndex;
@property (copy, nonatomic) id /* block */ carouselNextMediaHidePreviousAnimatedBlock;
@property (copy, nonatomic) id /* block */ carouselNextMediaHidePreviousCompletionBlock;
@property (copy, nonatomic) id /* block */ carouselNextMediaShowNextAnimatedBlock;
@property (copy, nonatomic) id /* block */ carouselNextMediaCompleBlock;
@property (copy, nonatomic) id /* block */ carouselAllMediaAnimatedBlock;
@property (copy, nonatomic) id /* block */ carouselAllMediaCompleBlock;
@property (weak, nonatomic) id<WCFinderInteractiveImageCommentCarouselViewDelegate> delegate;

+ (struct CGSize { double x0; double x1; })iconSizeWithOvertType:(unsigned long long)a0;
+ (unsigned long long)layoutTypeWithOvertType:(unsigned long long)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)setup;
- (void)setupGesture;
- (void)setupData;
- (void)setupSubViews;
- (void)setupDataReport;
- (id)genReportDict;
- (void)resetToInitStateBeforeAnimation;
- (void)setCarouselNextMediaHidePreviousAnimationBlock:(id /* block */)a0 hidePreviousCompletionBlock:(id /* block */)a1 showNextAnimatedBlock:(id /* block */)a2 showNextCompltionBlock:(id /* block */)a3;
- (void)setCarouselAllMediaAnimatedBlock:(id /* block */)a0 compltionBlock:(id /* block */)a1;
- (void)resetData;
- (struct CGSize { double x0; double x1; })updateWithParamsAndLayout:(id)a0;
- (void)_updateWithComment:(id)a0;
- (struct CGSize { double x0; double x1; })_updateLayoutWithComment:(id)a0;
- (struct CGSize { double x0; double x1; })_updateWithCommentAndLayout:(id)a0;
- (double)displayViewHorizontalMargin;
- (void)carouselNextMedia;
- (id)getCarouseCommentList;
- (id)getCarouseCommentAtIndex:(unsigned long long)a0;
- (id)getCurrentComment;
- (void)onTap:(id)a0;
- (void).cxx_destruct;

@end
