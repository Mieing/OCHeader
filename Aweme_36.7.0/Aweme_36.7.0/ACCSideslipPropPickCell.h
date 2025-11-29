@class ACCMBCircularProgressBarView;

@interface ACCSideslipPropPickCell : ACCSideslipPropBaseCell

@property (nonatomic, getter=isLoading) BOOL loading;
@property (retain, nonatomic) ACCMBCircularProgressBarView *progressView;
@property (copy, nonatomic) id /* block */ accessibilityTextPrefixBlock;
@property (readonly, nonatomic, getter=isShowProgress) BOOL showProgress;
@property (nonatomic) double progress;

- (void)showProgress:(BOOL)a0 animated:(BOOL)a1;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
- (void)setShowProgress:(BOOL)a0;

@end
