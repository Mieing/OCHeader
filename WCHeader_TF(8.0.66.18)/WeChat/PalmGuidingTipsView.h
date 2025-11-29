@class MMLoadingIndicatorView, PAGView, UIImageView, UIView, UILabel, NSString;

@interface PalmGuidingTipsView : MMUIView

@property (retain, nonatomic) UIView *imageBgView;
@property (retain, nonatomic) PAGView *pagView;
@property (retain, nonatomic) UIImageView *tipsImageView;
@property (retain, nonatomic) MMLoadingIndicatorView *loadingIndicator;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (nonatomic) int currentTipCode;
@property (nonatomic) unsigned long long currentHandType;
@property (copy, nonatomic) NSString *currentTipText;
@property (nonatomic) BOOL needFlippedLeft;

- (id)initWithTipCode:(int)a0 tipText:(id)a1 handType:(unsigned long long)a2;
- (void)updateWithTipCode:(int)a0 tipText:(id)a1 handType:(unsigned long long)a2;
- (void)updateHandType:(unsigned long long)a0;
- (void)updateView;
- (void)onlyShowPagView;
- (void)onlyShowTipsImageView;
- (void)onlyShowLoadingImageView;
- (void)showPagView:(id)a0;
- (void)updatePagView;
- (void).cxx_destruct;

@end
