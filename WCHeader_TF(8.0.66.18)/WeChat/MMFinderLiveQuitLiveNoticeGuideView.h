@class UIView, NSString, FinderLiveNoticeInfo, WCFinderContact, WCFinderAuthInfoIconView, MMUILabel, WCFinderHeadImageView, UIScrollView;

@interface MMFinderLiveQuitLiveNoticeGuideView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) FinderLiveNoticeInfo *noticeInfo;
@property (retain, nonatomic) WCFinderContact *contact;
@property (copy, nonatomic) id /* block */ onReserve;
@property (copy, nonatomic) id /* block */ onQuit;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *titleAreaBGView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) WCFinderHeadImageView *anchorAvatarView;
@property (retain, nonatomic) WCFinderAuthInfoIconView *anchorVerificationStatusView;
@property (retain, nonatomic) MMUILabel *nickLabel;
@property (retain, nonatomic) MMUILabel *contentLabel;
@property (retain, nonatomic) MMUILabel *timeLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithNoticeInfo:(id)a0 anchorContact:(id)a1 onReserve:(id /* block */)a2 onQuit:(id /* block */)a3;
- (void)setupPageSheetConfig;
- (void)initViews;
- (void)fillUIWithData;
- (void)layoutSubviews;
- (void)onCancelButtonClick;
- (void)onConfirmButtonClick;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (void).cxx_destruct;

@end
