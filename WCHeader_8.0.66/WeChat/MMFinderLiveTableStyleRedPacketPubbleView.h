@class UIImageView, NSString, MMFinderLiveLiveRoleSignView;

@interface MMFinderLiveTableStyleRedPacketPubbleView : MMFinderLiveTableStyleCommentPubbleCell <ILinkEventExt>

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) MMFinderLiveLiveRoleSignView *mysteriousSignView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isUITypeValid;
- (void)layoutUI;
- (void)layoutCommentLabel;
- (void)layoutIconImageView;
- (void)layoutMysteriousSignView;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
