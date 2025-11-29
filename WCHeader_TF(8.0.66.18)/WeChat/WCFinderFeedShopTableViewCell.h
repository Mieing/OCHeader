@class EcsFinderFeedSingleProductView, WCFinderBGMPlayer, WCFinderFeedContentVM, EcsFinderFeedSingleProductViewModel, WCFinderGradientView, NSString;
@protocol WCFinderFeedShopTableViewCellDelegate;

@interface WCFinderFeedShopTableViewCell : WCFinderTableViewCell <WCFinderFeedbackViewDelegate, EcsFinderFeedSingleProductViewDelegate, WCGeneralMonitorCellProtocol, WCFinderFocusCellProtocol>

@property (retain, nonatomic) WCFinderBGMPlayer *bgmPlayer;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (retain, nonatomic) EcsFinderFeedSingleProductView *ecsView;
@property (readonly, nonatomic) EcsFinderFeedSingleProductViewModel *ecsVM;
@property (weak, nonatomic) WCFinderGradientView *gradientView;
@property (nonatomic) BOOL showScrollTipsView;
@property (nonatomic) unsigned long long exposeTimestamp;
@property (weak, nonatomic) id<WCFinderFeedShopTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)updateWithContentVM:(id)a0;
- (void)willBeginDisplay:(long long)a0;
- (void)didEndDisplay:(long long)a0;
- (void)prepareForReuse;
- (void)showFeedbackViewAtFeedbackBtnFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_showFeedbackViewAtFeedbackBtnFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)ecsSingleProductView:(id)a0 onClickFeedback:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)shouldCaluculateAsFocusCell;
- (BOOL)currentMediaIsPlay;
- (void)playVideoIfSupport:(double)a0 silencePlay:(BOOL)a1;
- (void)stopVideoIfSupport;
- (void)cellStartExposeReportAction;
- (void)doCellEndExposeAction;
- (void)requestUnlikeReasonWithLoading:(BOOL)a0 successful:(id /* block */)a1 failure:(id /* block */)a2;
- (void)preLoadUnlikeReason;
- (void)onFinderFeedbackViewLikeButtonDidClick:(id)a0;
- (void)onFinderFeedbackViewDislikeButtonDidClick:(id)a0;
- (void)onFinderFeedbackViewComplainButtonDidClick:(id)a0;
- (void)onFinderFeedbackViewDidCancel:(id)a0;
- (void)onFinderFeedbackView:(id)a0 shouldCloseWithReasons:(id)a1;
- (void)willMoveToWindow:(id)a0;
- (id)sessionReportJson;
- (id)finderReportJson;
- (id)ecsReportJson;
- (id)getGeneralMonitorCellBizId;
- (void).cxx_destruct;

@end
