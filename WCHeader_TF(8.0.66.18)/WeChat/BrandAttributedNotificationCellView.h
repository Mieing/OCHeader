@class BrandAttributedNotificationCellViewModel, NSMutableArray;

@interface BrandAttributedNotificationCellView : BrandNotificationCellView {
    NSMutableArray *m_attributedMsgLabelArr;
}

@property (readonly, nonatomic) BrandAttributedNotificationCellViewModel *viewModel;

- (void)initMessageLabel;
- (void)resetMessageLabel;
- (void)updateViewModel:(id)a0;
- (void)layoutSubviews;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
