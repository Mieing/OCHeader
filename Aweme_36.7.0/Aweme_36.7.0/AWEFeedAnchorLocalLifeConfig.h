@class NSObject, NSString, UIView;
@protocol AWEPOIPromptCardManager, AWELocalLifeAnchorManagerProtocol;

@interface AWEFeedAnchorLocalLifeConfig : AWEFeedAnchorBaseConfig <AWEPOIPlayInteractionVCManagerProtocol, AWELocalLifeAnchorActionDelegate>

@property (retain, nonatomic) UIView *entryView;
@property (retain, nonatomic) NSObject<AWEPOIPromptCardManager> *promptCardManager;
@property (retain, nonatomic) NSObject *douDiscountObserver;
@property (nonatomic) BOOL promptCardAlreadyShown;
@property (retain, nonatomic) id<AWELocalLifeAnchorManagerProtocol> anchorManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:(id)a0 extraInfo:(id)a1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForCommentList:(id)a0 extraInfo:(id)a1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForBulletScreen:(id)a0 extraInfo:(id)a1;
+ (void)p_handleScanSceneAnchorParams:(id)a0 referString:(id)a1 logExtra:(id)a2;
+ (BOOL)hasMutableAnchorViewDataWithAwemeModelForFeed:(id)a0 extraInfo:(id)a1 anchorInfo:(id)a2;
+ (void)onMutableAnchorSheetShowWithAweme:(id)a0 context:(id)a1 count:(long long)a2;
+ (void)onMutableAnchorSheetClickWithAweme:(id)a0 context:(id)a1 count:(long long)a2;
+ (id)anchorType;

- (void)anchorViewWillShowOnSuperview;
- (void)updateWithAwemeModel:(id)a0 needPerformOnDisplay:(BOOL)a1;
- (id)anchorViewWithModel:(id)a0;
- (id /* block */)layoutWithAwemeModel:(id)a0 commonLayoutInfo:(id)a1;
- (void)showPOIPromptCard;
- (void)showAnchorDetail;
- (long long)currentSceneType;
- (void)trackAdEventWithLabelName:(id)a0;
- (id)p_getCurrentAnchorDataBuilderWithAweme:(id)a0;
- (void)showPOIPromptCardImmediately:(BOOL)a0;
- (void)setupPOIPromptCard;
- (void)trackProjectCardShow;
- (BOOL)shouldShowPOIAnchor;
- (void)updatePromptLogExtraWithAwemeModel:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;

@end
