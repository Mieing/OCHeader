@class NSString, UIView, RichTextView, WCFinderMemberShipMoreCollectionCoverView;
@protocol WCFinderMemberShipMoreCollectionViewCellDelegate;

@interface WCFinderMemberShipMoreCollectionViewCell : UICollectionViewCell <ILinkEventExt>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) RichTextView *tipsTextView;
@property (retain, nonatomic) RichTextView *updateTimeTextView;
@property (retain, nonatomic) WCFinderMemberShipMoreCollectionCoverView *coverView;
@property (nonatomic) unsigned long long viewTag;
@property (weak, nonatomic) id<WCFinderMemberShipMoreCollectionViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (id)genCoverView;
- (id)genContainerView;
- (void)setContainerViewCornerRadius:(double)a0;
- (id)genRichTextView;
- (void)updateTips:(id)a0 mediaWrapArray:(id)a1 viewTag:(unsigned long long)a2 updateTimeColor:(id)a3 updateTimeContent:(id)a4;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
