@class AWEPageContext, NSString, AWEAwemeModel;
@protocol AWEFeedAnchorPresenterDelegate, AWEPlayInteractionViewControllerProtocol, AWEBDXPopupShrinkVideoHelper;

@interface AWEFeedAnchorBasePresenter : NSObject <AWEFeedAnchorPriorityConfigProtocol>

@property (copy, nonatomic) id /* block */ blockPeriod;
@property (nonatomic) BOOL hasAnimated;
@property (retain, nonatomic) id<AWEBDXPopupShrinkVideoHelper> bdxPopupHelper;
@property (weak, nonatomic) id<AWEFeedAnchorPresenterDelegate> presenterDelegate;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) AWEPageContext *interactionContext;
@property (weak, nonatomic) id<AWEPlayInteractionViewControllerProtocol> interactionViewController;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) long long sceneType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:(id)a0 extraInfo:(id)a1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForCommentList:(id)a0 extraInfo:(id)a1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForBulletScreen:(id)a0 extraInfo:(id)a1;
+ (id)anchorType;

- (void)updateWithAwemeModel:(id)a0 needPerformOnDisplay:(BOOL)a1;
- (void)anchorViewWillShowOnSuperview:(id)a0;
- (void)anchorViewDidStartAnimation:(id)a0;
- (void)anchorViewDidClicked:(id)a0;
- (id)paramsForShow:(id)a0;
- (void)trackEventWithEventName:(id)a0 params:(id)a1 extraInfo:(id)a2;
- (id)paramsForClick:(id)a0;
- (id)addParamsForOpenURL:(id)a0 extraInfo:(id)a1;
- (BOOL)tryOpenBulletPopup:(id)a0;
- (id)paramsForStartAnimation:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
