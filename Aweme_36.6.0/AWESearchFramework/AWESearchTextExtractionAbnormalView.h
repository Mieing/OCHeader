@class UIButton, AWEUILoadingView, UIView;

@interface AWESearchTextExtractionAbnormalView : UIView

@property (retain, nonatomic) UIButton *retryButton;
@property (retain, nonatomic) UIView *placeholderLoadingView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UIView *loadingContainer;
@property (nonatomic) long long abnormalType;
@property (copy, nonatomic) id /* block */ retryBlock;

- (void)renderPlaceHolderLoadingView;
- (void)setLoadingViewHidden:(BOOL)a0;
- (void)showAbnormalWithType:(long long)a0;
- (void).cxx_destruct;
- (void)retryAction;
- (id)init;
- (void)hidden;
- (void)setupUI;

@end
