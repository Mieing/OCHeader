@class UIButton, AWEUILoadingView, NSNumber;

@interface AFDListExpandFooterView : UITableViewHeaderFooterView

@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) UIButton *expandButton;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (copy, nonatomic) id /* block */ expandBlock;
@property (retain, nonatomic) NSNumber *topPadding;

- (void)p_expandButtonTapped:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)startLoading;
- (void)stopLoading;
- (id)initWithReuseIdentifier:(id)a0;
- (void)layoutSubviews;

@end
