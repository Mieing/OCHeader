@class WCFinderAuthorToolbarItemView, NSString, NSDictionary, WCFinderFeedContentVM, MMUIButton, UIButton;
@protocol WCFinderFeedToolbarActionDelegate;

@interface WCFinderFullScreenAuthorCollectionToolbarView : UIView <WCFinderFeedToolbarActionExt>

@property (retain, nonatomic) NSString *tid;
@property (retain, nonatomic) MMUIButton *viewIconBtn;
@property (retain, nonatomic) UIButton *viewNumView;
@property (nonatomic) unsigned long long viewCount;
@property (retain, nonatomic) WCFinderAuthorToolbarItemView *thumbLikeItemView;
@property (nonatomic) unsigned long long thumbLikeCount;
@property (retain, nonatomic) WCFinderAuthorToolbarItemView *forwardItemView;
@property (nonatomic) unsigned long long forwardCount;
@property (retain, nonatomic) WCFinderAuthorToolbarItemView *heartLikeItemView;
@property (nonatomic) unsigned long long heartLikeCount;
@property (retain, nonatomic) WCFinderAuthorToolbarItemView *commentItemView;
@property (nonatomic) unsigned long long commentCount;
@property (nonatomic) BOOL isCommentClose;
@property (nonatomic) unsigned long long wxStatusRefCount;
@property (weak, nonatomic) WCFinderFeedContentVM *contentVM;
@property (nonatomic) BOOL eyeShowEntrance;
@property (nonatomic) BOOL hasShowAbnormal;
@property (nonatomic) BOOL isPrivateState;
@property (nonatomic) BOOL useEyeStyle;
@property (retain, nonatomic) NSDictionary *eyeReportInfo;
@property (weak, nonatomic) id<WCFinderFeedToolbarActionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubView;
- (void)adjustUIMargin;
- (void)adjustUIMarginAgain;
- (void)adjustUIMarginThird;
- (void)adjustUIMarginFourth;
- (BOOL)testLayoutBeauty;
- (void)adjustUICenterY;
- (void)adjustUIMargin:(double)a0;
- (void)resetLabelFontSize:(double)a0;
- (void)updateViewIconStyle:(BOOL)a0 private:(BOOL)a1 abnormal:(BOOL)a2;
- (void)resetButtonEdgeInset:(id)a0;
- (void)updateEyeViewsPosition;
- (void)didClickLikeAction;
- (void)didClickCommentAction;
- (void)didClickForwardAction;
- (void)didClickCollectionAction;
- (void)didClickViewIconAction;
- (void)updateUIWithContentVM:(id)a0 commentClose:(BOOL)a1 allowForward:(BOOL)a2 allowFav:(BOOL)a3 allowLike:(BOOL)a4 allowComment:(BOOL)a5;
- (void)updateThumbLikeView;
- (void)updateForwardView;
- (void)updateHeartLikeView;
- (void)updateCommentView;
- (void)_setDynamicIconWithKey:(id)a0 forView:(id)a1 color:(id)a2;
- (void)didClickShareBtn:(id)a0;
- (void)updateViewView:(BOOL)a0;
- (void)bindWithTid:(id)a0;
- (void)cleanDataEntraceReportData;
- (void)updatePrivateState:(BOOL)a0 entranceStyle:(long long)a1 commentScene:(int)a2 feedId:(id)a3;
- (id)viewEyeView;
- (void).cxx_destruct;

@end
