@class MMLiveIconButton, UIView, MMWebImageView, NSString, WCFinderLiveGenericFeedVM, UIImageView, WCFinderLiveFeedGenericCoverReportInfo, WCFinderAuthInfoIconView, WCFinderHeadImageView, UILabel;
@protocol WCFinderLiveHomePageNoticeCellDelegate;

@interface WCFinderLiveHomePageNoticeCell : WCFinderLiveFeedBaseStyleableCell <WCActionSheetDelegate, WCFinderLiveGenericFeedVMDelegate, MMWebImageViewDelegate, WCFinderLiveFeedGenericCardCellProtocol, WCFinderLiveFeedGenericCoverReportProtocol>

@property (retain, nonatomic) MMWebImageView *coverImageView;
@property (retain, nonatomic) UIImageView *logoView;
@property (retain, nonatomic) UILabel *noticeTitleLabel;
@property (retain, nonatomic) WCFinderHeadImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authInfoIconView;
@property (retain, nonatomic) UILabel *noticeTimeLabel;
@property (retain, nonatomic) UILabel *noticeDescLabel;
@property (retain, nonatomic) MMLiveIconButton *actionButton;
@property (retain, nonatomic) UIView *coverMaskView;
@property (retain, nonatomic) WCFinderLiveGenericFeedVM *feedVM;
@property (nonatomic) unsigned long long containerId;
@property (nonatomic) int commentScene;
@property (retain, nonatomic) WCFinderLiveFeedGenericCoverReportInfo *coverReportInfo;
@property (weak, nonatomic) id<WCFinderLiveHomePageNoticeCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViewsIfNeeded;
- (void)updateStyle;
- (void)prepareForReuse;
- (void)updateWithFeedVM:(id)a0;
- (void)initViews;
- (BOOL)showLogo;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutUI;
- (void)onActionButtonClicked:(id)a0;
- (void)updateActionButton;
- (void)updateActionButtonForConcert;
- (void)presentConcertTicketForNoticeInfo:(id)a0 byViewController:(id)a1;
- (void)onFeedNoticeCardStatusUpdate;
- (void)onFeedNoticeCardCheckPresentConcertTicket;
- (void)onLoadImageOK:(id)a0;
- (id)getCoverReportInfo;
- (void)resetCoverReportInfo;
- (void).cxx_destruct;

@end
