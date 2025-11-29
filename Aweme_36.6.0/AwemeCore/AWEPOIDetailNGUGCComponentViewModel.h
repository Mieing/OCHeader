@class NSString, AWEPOIDetailFeedUgcCell, AWEPOIDetailNGPageContext, AWEPOIDetailNGUGCTrackShowConstraint, AWEPOIFeedUgcItemModel, AWEPOIDetailAwemePlayerViewController, AWEPOIDetailNGUGCComponentView;

@interface AWEPOIDetailNGUGCComponentViewModel : DitoComponentViewModel <AWEPOISyncFeedExtensionGetModelProtocol, AWEPOIDetailAwemeWaterfallAwemeCellDelegate, AWEPOIDetailNGAutoPlayUtilObjectProtocol, AWEPOIDetailNGListCellProtocol>

@property (weak, nonatomic) AWEPOIDetailNGPageContext *context;
@property (retain, nonatomic) AWEPOIDetailNGUGCTrackShowConstraint *trackShowConstraint;
@property (retain, nonatomic) AWEPOIDetailAwemePlayerViewController *awemePlayerForExpand;
@property (nonatomic) double containerWidth;
@property (retain, nonatomic) AWEPOIFeedUgcItemModel *itemModel;
@property (weak, nonatomic) AWEPOIDetailFeedUgcCell *playerCell;
@property (weak, nonatomic) AWEPOIDetailNGUGCComponentView *componentView;
@property (nonatomic) BOOL isAboveNPSCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long cellIndex;
@property (nonatomic) BOOL isFirst;
@property (nonatomic) BOOL isLast;
@property (nonatomic) long long modelIndex;
@property (nonatomic) long long awemeIndex;
@property (nonatomic) BOOL hasRemoved;
@property (nonatomic) BOOL hasTracked;

- (id)rateId;
- (id)poiDetail;
- (id)getAwemeModel;
- (id)componentReuseIdentifier;
- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (void)pageView:(id)a0 didScroll:(id)a1;
- (void)didHalfContainerStatusChange:(id)a0 state:(long long)a1;
- (void)vsdContainer:(id)a0 stateChange:(unsigned long long)a1;
- (id)constData;
- (id)generalContext;
- (void)componentViewDidCompleteShow;
- (id)syncFeedManager;
- (void)componentViewWillShow;
- (BOOL)hasAweme;
- (BOOL)canValidShow;
- (BOOL)hasDoRateDiggAction;
- (void)didTapActionButtonWithCellIndex:(long long)a0 playState:(long long)a1;
- (void)waterfallCellNeedReload:(id)a0;
- (id)paramsForUgcRateUserPageEntrance;
- (void)didTapSingleColumnVideoWithCell:(id)a0;
- (void)didTapDeleteButtonWithRateID:(id)a0 rateTags:(id)a1 model:(id)a2;
- (BOOL)canShowRateDiggHint;
- (id)rateDiggHintText;
- (BOOL)canShowRateDiggHintInLocalAndUpdate;
- (void)didTapReplyEntranceWithShowKeyboard:(BOOL)a0;
- (void)recommendDishCollectUpdate:(id)a0;
- (void)trackShowUgcCommentEvent:(id)a0 forInstantShow:(BOOL)a1 completionBlock:(id /* block */)a2;
- (id)eventAttachedParams;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;
- (BOOL)hasModel;
- (double)cellHeight;
- (void)autoPlay;

@end
