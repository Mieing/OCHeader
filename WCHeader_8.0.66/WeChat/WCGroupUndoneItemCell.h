@class UIView, NSString, ChatRoomToolMessageEventInfo, UIImageView, MMWebImageView, MMUIButton, MMUILabel;
@protocol WCGroupUndoneItemCellDelegate;

@interface WCGroupUndoneItemCell : UICollectionViewCell {
    MMUIButton *_roundedContainer;
    MMWebImageView *_headView;
    MMUILabel *_titleLabel;
    UIView *_divLine;
    MMUIButton *_completeButton;
    UIImageView *_memberImageView;
    MMUILabel *_numLabel;
    NSString *_lastImageUrl;
}

@property (retain, nonatomic) ChatRoomToolMessageEventInfo *model;
@property (weak, nonatomic) id<WCGroupUndoneItemCellDelegate> delegate;

+ (id)LabelFont;
+ (id)CompleteLabelFont;
+ (id)ReplyLabelFont;
+ (double)WidthToFitTitle:(id)a0;
+ (double)WidthToFitCompleteTitle:(id)a0;
+ (double)WidthToFitReplyTitle:(id)a0;
+ (struct CGSize { double x0; double x1; })SizeToFitModel:(id)a0;
+ (double)CellHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)initViews;
- (void)updateWithModel:(id)a0;
- (void)showMenus;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)handleMenuControllerWillHideMenuNotification:(id)a0;
- (void)onLongPress:(id)a0;
- (void)onRevoke:(id)a0;
- (void)onDelete:(id)a0;
- (void)layoutSubviews;
- (void)onClose:(id)a0;
- (void)onTapContainer:(id)a0;
- (void)onComplete:(id)a0;
- (void).cxx_destruct;

@end
