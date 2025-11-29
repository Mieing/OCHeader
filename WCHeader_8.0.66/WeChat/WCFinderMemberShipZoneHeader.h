@class WCFinderMemberShipZoneHeaderData, NSString, WCFinderMSInteractionView, WCFinderProfileCardContainer, WCFinderFeedContentTextView, UIButton, RichTextView, WCFinderMemberShipZoneReporter, UILabel;
@protocol WCFinderMemberShipZoneHeaderDelegate;

@interface WCFinderMemberShipZoneHeader : UIView <WCFinderMemberShipZoneHeaderDataDelegate, WCFinderProfileCardContainerExposeDelegate, WCFinderFeedContentTextClickActionDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) WCFinderFeedContentTextView *descContentLabel;
@property (retain, nonatomic) WCFinderProfileCardContainer *cardContainer;
@property (retain, nonatomic) UIButton *postBtn;
@property (retain, nonatomic) UIButton *liveBtn;
@property (retain, nonatomic) RichTextView *benefitsLabel;
@property (retain, nonatomic) RichTextView *centerDataLabel;
@property (retain, nonatomic) UIButton *activityBtn;
@property (nonatomic) BOOL descContentLabelIsExpand;
@property (retain, nonatomic) WCFinderMSInteractionView *interactionView;
@property (retain, nonatomic) WCFinderMemberShipZoneHeaderData *data;
@property (weak, nonatomic) id<WCFinderMemberShipZoneHeaderDelegate> delegate;
@property (retain, nonatomic) WCFinderMemberShipZoneReporter *reporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)update;
- (void)configButton:(id *)a0 display:(BOOL)a1;
- (id)createButton:(void *)a0;
- (id)genRichTextView;
- (id)genContentTextView;
- (id)buttonTitleColor;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)onClickActivity;
- (void)onClickPost;
- (void)onClickLive;
- (void)onClickFansEntrance;
- (void)onMemberShipZoneHeaderDataChanged;
- (void)onCardView:(id)a0 expose:(long long *)a1 exposeCount:(long long)a2 unExpose:(long long *)a3 unExposeCount:(long long)a4;
- (void)onFeedContentTextView:(id)a0 clickReadMore:(BOOL)a1;
- (void).cxx_destruct;

@end
