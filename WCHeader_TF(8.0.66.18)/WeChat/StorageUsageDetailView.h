@class StorageUsageDetailModel, UIButton, MMUIActivityIndicatorView, UIView, MMUILabel;
@protocol StorageUsageDetailViewDelegate;

@interface StorageUsageDetailView : UIView {
    UIView *m_backgroundView;
    MMUILabel *m_titleLabel;
    MMUILabel *m_sizeLabel;
    MMUILabel *m_subTitleLabel;
    UIButton *m_actionButton;
    MMUIActivityIndicatorView *m_loadingView;
}

@property (retain, nonatomic) UIView *originLabelView;
@property (retain, nonatomic) StorageUsageDetailModel *model;
@property (weak, nonatomic) id<StorageUsageDetailViewDelegate> delegate;
@property (nonatomic) BOOL isLoading;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubview;
- (void)initTitleLabel;
- (void)initSizeLabel;
- (void)initSubTitleLabel;
- (void)initActionButton;
- (void)initLoadingView;
- (void)initCacheOriginView;
- (void)layoutSubviews;
- (void)layout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)showLoading;
- (void)hideLoading;
- (void)updateSizeAfterCleaning:(unsigned long long)a0;
- (void)onShowToast;
- (void)onGoToLongCleanCacheButton:(id)a0;
- (void)onManageChatLogButtonClicked:(id)a0;
- (void)onClearCacheButtonClicked:(id)a0;
- (void)onDeepCleanButtonClicked:(id)a0;
- (void)onCleanResourceButtonClicked:(id)a0;
- (void)onCleanOtherAccountButtonClicked:(id)a0;
- (void).cxx_destruct;

@end
