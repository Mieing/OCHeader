@class UILabel, EcsGiftMessageViewModel;

@interface EcsGiftMessageCellView : CommonMessageCellView

@property (readonly, nonatomic) EcsGiftMessageViewModel *viewModel;
@property (retain, nonatomic) UILabel *m_tagLabel;
@property (retain, nonatomic) UILabel *m_wishLabel;
@property (retain, nonatomic) UILabel *m_statusTagLabel;

- (void)layoutContentView;
- (void)updateStatus;
- (void)updateStatusLabel;
- (void)updateBgImageView:(BOOL)a0;
- (void)layoutInternal;
- (void)onTouchUpInside;
- (id)operationMenuItems;
- (void)onAppear;
- (void).cxx_destruct;

@end
