@class NSString, UIImageView, MMTagTextField, MMUIButton;

@interface WCFinderSearchTitleView : MMTitleView

@property (nonatomic) long long style;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) UIImageView *searchIconView;
@property (retain, nonatomic) MMTagTextField *searchField;
@property (retain, nonatomic) MMUIButton *rightClearButton;
@property (nonatomic) BOOL enableSearch;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)dynamicDelegate;
- (void)prepareTextView;
- (void)prepareBottomLine;
- (void)prepareCancelButton;
- (void)setDelegate:(id)a0;
- (void)layoutSubviews;
- (BOOL)resignFirstResponder;
- (id)tintColor;
- (void)onClickCleanButton;
- (void).cxx_destruct;

@end
