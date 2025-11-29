@class MMFinderLiveContext, WCFinderContact, NSString, UIImageView, WCFinderAuthInfoIconView, WCFinderHeadImageView, MMUILabel, UIScrollView;

@interface MMLiveFollowConfirmPageSheetView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) UIScrollView *dialogView;
@property (retain, nonatomic) MMUILabel *title;
@property (retain, nonatomic) WCFinderHeadImageView *anchorHeadImageView;
@property (retain, nonatomic) MMUILabel *anchorNameLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authIconView;
@property (retain, nonatomic) MMUILabel *followNumLabel;
@property (retain, nonatomic) MMUILabel *isFollowed;
@property (retain, nonatomic) UIImageView *followedIcon;
@property (nonatomic) BOOL isPop;
@property (nonatomic) long long friendFollowCount;
@property (retain, nonatomic) MMFinderLiveContext *liveContext;
@property (retain, nonatomic) WCFinderContact *contact;
@property (nonatomic) BOOL isPopup;
@property (nonatomic) BOOL isTop;
@property (nonatomic) long long previousOrientation;
@property (nonatomic) long long type;
@property (copy, nonatomic) id /* block */ block;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContact:(id)a0 liveContext:(id)a1 isPopup:(BOOL)a2 isTop:(BOOL)a3 type:(long long)a4;
- (void)setupUI;
- (void)pageSheetDidRotation;
- (void)pageSheetWillAppear;
- (void)pageSheetWillClose:(BOOL)a0;
- (void)layoutBoundBizLiveFollowConfirm:(id)a0 liveContext:(id)a1 isPopup:(BOOL)a2;
- (void)layoutFinderLiveFollowConfirm:(id)a0 isPopup:(BOOL)a1 isTop:(BOOL)a2;
- (void)updateAuthInfo:(id)a0;
- (void)delayClose;
- (void)setupPageSheetConfig;
- (void)show;
- (double)contentHeight;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id)colorForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (double)getRealHeight;
- (double)getCurrentHeight;
- (id)audienceLogReporter;
- (id)liveTask;
- (void).cxx_destruct;

@end
