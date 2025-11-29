@class MMWebImageView, NSMutableDictionary, UIImageView, CAShapeLayer, UILabel, EcsGiftChatroomMessageViewModel, UIView;

@interface EcsGiftChatroomMessageCellView : CommonMessageCellView

@property (readonly, nonatomic) EcsGiftChatroomMessageViewModel *viewModel;
@property (retain, nonatomic) UILabel *m_descLabel;
@property (retain, nonatomic) UILabel *m_titleLabel;
@property (retain, nonatomic) UIImageView *m_giftBubbleBgView;
@property (retain, nonatomic) UIImageView *m_iconView;
@property (retain, nonatomic) UIView *m_tmpIconView;
@property (retain, nonatomic) UIView *showResourceBgView;
@property (retain, nonatomic) NSMutableDictionary *showResourceMaskImageViewCache;
@property (retain, nonatomic) MMWebImageView *showResourceImageView;
@property (retain, nonatomic) UIImageView *showResourceMaskView;
@property (retain, nonatomic) CAShapeLayer *skinMaskLayer;

- (void)layoutContentView;
- (void)initIconView;
- (void)initGiftBubbleBgView;
- (void)initTitleLabel;
- (void)initDescLabel;
- (void)updateStatus;
- (void)updateTitleLabel;
- (void)updateIconView;
- (void)updateDescLabel;
- (void)initSourceViewInside;
- (void)updateBgImageView:(BOOL)a0;
- (void)updateGiftSourceImageView;
- (id)generateMaskImage:(id)a0 isSender:(BOOL)a1;
- (void)layoutInternal;
- (void)onTouchUpInside;
- (id)operationMenuItems;
- (void)onAppear;
- (BOOL)canShowRevokeMsgMenuItem;
- (void).cxx_destruct;

@end
