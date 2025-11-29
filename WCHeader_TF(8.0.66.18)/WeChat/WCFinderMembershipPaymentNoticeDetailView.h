@class NSString;
@protocol WCFinderMembershipPaymentNoticeDetailViewDelegate;

@interface WCFinderMembershipPaymentNoticeDetailView : UIView <ILinkEventExt>

@property (weak, nonatomic) id<WCFinderMembershipPaymentNoticeDetailViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutContent;
- (void)layout;
- (id)genRichTextView;
- (id)genDotView;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
