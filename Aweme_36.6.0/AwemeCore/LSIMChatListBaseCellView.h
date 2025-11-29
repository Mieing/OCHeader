@class LSIMChatListBaseCellVM, UIImageView, UIView, UILabel, LSIMUnreadDotView;

@interface LSIMChatListBaseCellView : LSListCellView

@property (retain, nonatomic) LSIMChatListBaseCellVM *cellVM;
@property (retain, nonatomic) UIView *holderView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *shopNameLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) LSIMUnreadDotView *unreadView;
@property (retain, nonatomic) UIImageView *warningIcon;
@property (retain, nonatomic) UIView *separateView;
@property (retain, nonatomic) UIImageView *littleAvatarIcon;
@property (retain, nonatomic) UILabel *tagLabel;

+ (struct CGSize { double x0; double x1; })cellSizeWithCellVM:(id)a0 listSize:(struct CGSize { double x0; double x1; })a1;

- (void)p_addSubviews;
- (void)addContainerGestures;
- (void)addWholeContentGesture;
- (void)handleWholeContainerLongPressGesture:(id)a0;
- (void)updateShopSubview;
- (void)configPlatformServiceWithViewModel:(id)a0;
- (void)updatePlatformServiceConversationSubview;
- (void)updateUnreadCountNew:(id)a0;
- (void)updateWarningIconWithFailed:(BOOL)a0;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
