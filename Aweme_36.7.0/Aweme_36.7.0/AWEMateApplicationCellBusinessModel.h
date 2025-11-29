@class AWECodeGenMateApplyModel, AWEUserModel;

@interface AWEMateApplicationCellBusinessModel : NSObject <AWEUserListGeneralCellBusinessModelProtocol>

@property (copy, nonatomic) id /* block */ refreshBlock;
@property (nonatomic) BOOL isMateApplyHeyRequestOnAir;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) AWECodeGenMateApplyModel *model;
@property (nonatomic) BOOL isUnread;
@property (copy, nonatomic) id /* block */ longPressBlock;
@property (copy, nonatomic) id /* block */ replyBlock;
@property (copy, nonatomic) id /* block */ deleteBlock;
@property (copy, nonatomic) id /* block */ updateBlock;

+ (id)generateOneCellViewModelFromOneModel:(id)a0 isUnread:(BOOL)a1;

- (id)referString;
- (id)enterFrom;
- (void)enterProfile;
- (id)relationSheetContext;
- (void)onDidBindToCellWithRefreshBlock:(id /* block */)a0;
- (void)onUserStatusChanged;
- (id)subTitleAttributedString;
- (id)subtitleTruncationToken;
- (long long)subtitleNumberOfLines;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })subtitleHitTestInsets;
- (BOOL)shouldShowRelationButton;
- (BOOL)relationButtonIncludesDefaultLightInteractionState;
- (BOOL)relationButtonIncludesDefaultSendMessageState;
- (BOOL)relationButtonIncludesDefaultFollowUnfollowStates;
- (id)extraRelationButtonStates;
- (id)extraRelationButtonTransitions;
- (BOOL)disableDefaultButtonRefresh;
- (BOOL)shouldShowMoreActionButton;
- (BOOL)shouldShowUnreadView;
- (BOOL)shouldShowDisclosureIndicator;
- (id /* block */)bigFontAutoFontSizeBlock;
- (id)customBottomView;
- (BOOL)enableShowReplyButton;
- (id)replyButtonAttachmentString;
- (id)lastLeaveMsgForUID:(id)a0;
- (id)lastMyLeaveMsg;
- (void)showReplyAlert;
- (BOOL)enableShowLeaveMsg;
- (void)markHasRead;
- (void)mateApplyHeyWithMateApplyId:(id)a0 completion:(id /* block */)a1;
- (BOOL)isMateApplicationFromMe;
- (void)refreshCell;
- (void).cxx_destruct;
- (void)longPressAction;
- (id)cellBackgroundColor;
- (double)avatarSize;

@end
