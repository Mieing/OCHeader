@class FinderPopupShowInfo, WCFinderPopupPanelReportModel, WCFinderPopupTipsView, WCFinderRedDotCtrlInfo;
@protocol WCFinderPopupPanelViewProtocol;

@interface WCFinderPopupPanelView : MMUIView

@property (retain, nonatomic) FinderPopupShowInfo *popupShowInfo;
@property (retain, nonatomic) WCFinderPopupTipsView *tipsView;
@property (weak, nonatomic) id<WCFinderPopupPanelViewProtocol> delegate;
@property (retain, nonatomic) WCFinderRedDotCtrlInfo *cacheCtrlInfo;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) WCFinderPopupPanelReportModel *reportModel;
@property (nonatomic) long long tabType;
@property (nonatomic) BOOL willCheckSlideReport;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)triggerReportActionByActionType:(unsigned long long)a0 unexpReasonType:(unsigned long long)a1;
- (id)getCurrentCgiEventEid;
- (id)genReportDicInfo;
- (void)setUpWithPopupShowInfo:(id)a0;
- (void)beginShow;
- (id)getBindFeedId;
- (BOOL)isShowing;
- (void)reportSlideUpwardsReport;
- (void).cxx_destruct;

@end
