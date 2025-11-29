@class NSString, NSDictionary, AWEPageContext, UIView, AWEAwemeModel;
@protocol AWEFeedAnchorViewBehaviorProtocol, AWEAwemePlayInteractionUIDisplayDelegate, AWEAwemePlayInteractionUpdateDelegate, AWEAwemePlayInteractionPanelDelegate, AWEPlayInteractionViewControllerProtocol, AWEMultiAnchorExtendViewProtocol, AWEAwemePlayInteractionCommerceDelegate, AWEPOITradeEntryAnchorViewManagerProtocol, AWEAwemePlayInteractionPresenterMethodDelegate;

@interface AWEFeedAnchorPOITradeConfig : AWEFeedAnchorBaseConfig <AWELocalLifeAnchorActionDelegate, AWEPOIPlayInteractionVCManagerProtocol, AWEFeedAnchorPOITradeConfigProtocol>

@property (retain, nonatomic) UIView<AWEFeedAnchorViewBehaviorProtocol, AWEMultiAnchorExtendViewProtocol> *poiTradeEntryView;
@property (retain, nonatomic) NSString *creationId;
@property (nonatomic) BOOL anchorInitializeMark;
@property (copy, nonatomic) NSString *POIIDInLogExtra;
@property (retain, nonatomic) id<AWEPOITradeEntryAnchorViewManagerProtocol> anchorManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEAwemePlayInteractionPresenterMethodDelegate, AWEAwemePlayInteractionPanelDelegate, AWEAwemePlayInteractionCommerceDelegate, AWEAwemePlayInteractionUIDisplayDelegate, AWEAwemePlayInteractionUpdateDelegate, AWEPlayInteractionViewControllerProtocol> interactionViewController;
@property (weak, nonatomic) AWEPageContext *interactionContext;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (readonly, copy, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) id /* block */ anchorViewDidDisappearBlock;
@property (nonatomic) long long sceneType;

+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:(id)a0 extraInfo:(id)a1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForCommentList:(id)a0 extraInfo:(id)a1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForBulletScreen:(id)a0 extraInfo:(id)a1;
+ (BOOL)hasMutableAnchorViewDataWithAwemeModelForFeed:(id)a0 extraInfo:(id)a1 anchorInfo:(id)a2;
+ (void)onMutableAnchorSheetShowWithAweme:(id)a0 context:(id)a1 count:(long long)a2;
+ (void)onMutableAnchorSheetClickWithAweme:(id)a0 context:(id)a1 count:(long long)a2;
+ (id)anchorType;

- (void)anchorViewWillShowOnSuperview;
- (void)updateWithAwemeModel:(id)a0 needPerformOnDisplay:(BOOL)a1;
- (id)anchorViewWithModel:(id)a0;
- (id /* block */)layoutWithAwemeModel:(id)a0 commonLayoutInfo:(id)a1;
- (void)showAnchorDetail;
- (id)createTradeAnchorManagerContext;
- (BOOL)shouldShowTradeDetail;
- (void)onTradeLabelClicked:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
