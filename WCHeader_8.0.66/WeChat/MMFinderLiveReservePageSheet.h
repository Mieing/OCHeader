@class UIImageView, NSMutableArray, UIButton, UIView, MMPageSheetAdapter, NSString, MMUILabel, UIScrollView, WCFinderHeadImageView, MMCPLabel, MMFinderLiveReserveViewModel, WCFinderAuthInfoIconView, MMUIButton;

@interface MMFinderLiveReservePageSheet : MMLiveHalfScreenPanelView <MMPageSheetAdapterDelegate, MMFinderLiveReserveViewModelObserver>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIScrollView *containerScrollView;
@property (retain, nonatomic) UIScrollView *landsacpeDescContentScrollView;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) WCFinderHeadImageView *headerView;
@property (retain, nonatomic) MMCPLabel *finderNameLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *proofIconView;
@property (retain, nonatomic) UIView *sourceView;
@property (retain, nonatomic) MMUILabel *sourceLabel;
@property (retain, nonatomic) UIImageView *sourceIcon;
@property (retain, nonatomic) MMCPLabel *reserveTimeLabel;
@property (retain, nonatomic) MMCPLabel *introductionLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) MMPageSheetAdapter *pageSheetAdapter;
@property (retain, nonatomic) NSMutableArray *viewList;
@property (retain, nonatomic) MMFinderLiveReserveViewModel *viewModel;
@property (copy, nonatomic) id /* block */ jsapiSuccessBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithGetLiveNoticeResponse:(id)a0 gMsgID:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 fromVC:(id)a3;
- (void)setReportCommentScene:(id)a0 sceneNote:(id)a1 noticeBussinessDic:(id)a2;
- (void)layoutSubviews;
- (void)layoutContentViews;
- (void)layoutLandscapeContentViews;
- (BOOL)isLandscape;
- (void)layoutHalfScreenContentView;
- (void)layoutActionButtonWithType:(unsigned long long)a0;
- (void)openWithAnimation:(BOOL)a0 completeBlock:(id /* block */)a1;
- (void)closeWithAnimation:(BOOL)a0;
- (id)provideButtonWithReserveStatus:(unsigned long long)a0;
- (void)onTappedCloseView;
- (void)onTappedLiveActionButton;
- (void)onTappedCloseButton;
- (void)pageSheetDidDisappear:(id)a0;
- (void)pageSheetDidAppear:(id)a0;
- (void)onNeedDismissView;
- (void)onViewModelWorkFinished;
- (void).cxx_destruct;

@end
