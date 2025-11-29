@class NSString;

@interface CAKAIMemoriesSearchListHeaderLoadingView : UIView {
    void /* unknown type, empty encoding */ titleIcon;
    void /* unknown type, empty encoding */ firstLineIcon;
    void /* unknown type, empty encoding */ secondLineIcon;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_firstLineLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_secondLineLabel;
    void /* unknown type, empty encoding */ titleLabelHighlight;
    void /* unknown type, empty encoding */ firstLineLabelHighlight;
    void /* unknown type, empty encoding */ secondLineLabelHighlight;
    void /* unknown type, empty encoding */ line1;
    void /* unknown type, empty encoding */ line2;
    void /* function */ keyword;
}

@property (nonatomic, copy) NSString *keyword;

- (id)initWithKeyword:(id)a0;
- (void)showItemsFoundWithCount:(long long)a0;
- (void)animateFirstLine;
- (void)animateSecondLine;
- (void)stopAnimating;
- (void)startAnimating;
- (void).cxx_destruct;
- (void)resetState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
