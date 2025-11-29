@class StorageUsageSummaryModel, UILabel, UIView, MMUILabel;

@interface StorageUsageSummaryView : UIView {
    MMUILabel *m_titleLabel;
    MMUILabel *m_sizeLabel;
    MMUILabel *m_subTitleLabel;
    UILabel *m_percentLabel;
    UIView *m_percentView;
    BOOL isAvailabled;
}

@property (nonatomic) float progressScanner;
@property (nonatomic) float progressChatlog;
@property (nonatomic) float progressCache;
@property (nonatomic) float progressTimer;
@property (retain, nonatomic) StorageUsageSummaryModel *model;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubview;
- (void)initTitleLabel;
- (void)initSizeLabel;
- (void)initSubTitleLabel;
- (void)initPercentView;
- (void)finishScanAndSetProgress;
- (void)setProgress:(float)a0 isAvailabled:(BOOL)a1 progressType:(unsigned long long)a2;
- (void)layoutSubviews;
- (void)layout:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateLayoutWithAnimation;
- (void).cxx_destruct;

@end
