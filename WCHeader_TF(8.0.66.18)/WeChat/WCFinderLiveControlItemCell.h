@class MMLiveControlItem, UIImageView, NSString, UIView, UILabel;
@protocol WCFinderLiveControlItemCellDelegate;

@interface WCFinderLiveControlItemCell : UIView <MMLiveControlItemDelegate>

@property (retain, nonatomic) MMLiveControlItem *controlItem;
@property (retain, nonatomic) UIView *badgeView;
@property (retain, nonatomic) UIView *itemCell;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (weak, nonatomic) id<WCFinderLiveControlItemCellDelegate> cellDelegate;
@property (nonatomic) BOOL isActionDisabled;
@property (nonatomic) BOOL isImageMirrored;
@property (retain, nonatomic) NSString *redDotPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 MMLiveControlItem:(id)a1;
- (void)layoutSubviews;
- (void)updateRedPacketChatroomSelectionStyle:(long long)a0;
- (void)initView;
- (void)onClickToControlItem;
- (void)onBadgeEnablementChangedForItem:(id)a0;
- (void).cxx_destruct;

@end
