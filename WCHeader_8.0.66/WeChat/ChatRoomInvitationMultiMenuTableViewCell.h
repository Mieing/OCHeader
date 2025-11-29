@class UIView, NSString, MMHeadImageView, ChatRoomInvitationWrap, UIButton, NSMutableArray, RichTextView, UILabel;
@protocol ChatRoomInvitationMultiMenuTableViewCellDelegate;

@interface ChatRoomInvitationMultiMenuTableViewCell : MMMultiMenuTableViewCell <ILinkEventExt, ChatRoomInvitationCellQuitRoomInfoViewDelegate>

@property (retain, nonatomic) UIView *cardView;
@property (retain, nonatomic) MMHeadImageView *inviterHeadImageView;
@property (retain, nonatomic) ChatRoomInvitationWrap *invitationWrap;
@property (retain, nonatomic) RichTextView *titleView;
@property (retain, nonatomic) UIButton *approveButton;
@property (retain, nonatomic) UILabel *hasApprovedLabel;
@property (retain, nonatomic) UIView *separatorLineView;
@property (retain, nonatomic) NSMutableArray *reasonViews;
@property (retain, nonatomic) NSMutableArray *quitRoomInfoViews;
@property (weak, nonatomic) id<ChatRoomInvitationMultiMenuTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)estimatedHeight;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (void)initData;
- (void)initSeparatorLineView;
- (void)initCardView;
- (void)initTopView;
- (id)getHasApprovedLabelFont;
- (void)makeReasonViews;
- (id)modifyReason:(id)a0;
- (void)makeQuitRoomInfoViews;
- (void)setupLayout;
- (void)layoutSubviews;
- (void)doApplyLayout;
- (void)makeCellForInvitationWrap:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)onApprove;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onQuitRoomInfoView:(id)a0 tapViewMsgHistoryButton:(id)a1;
- (void)onTapHeadImage;
- (void)openContactProfile:(id)a0;
- (id)getTitleString;
- (Class)getChatRoomInvitationCellQuitRoomInfoViewClass;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)a0;
- (long long)indexOfAccessibilityElement:(id)a0;
- (void).cxx_destruct;

@end
