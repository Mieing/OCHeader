@class NSString, AWEMarkView, AWEPageContext, AWEFeedAnchorBasePresenter;

@interface AWEFeedAnchorAnimationViewConfig : AWEFeedAnchorBaseConfig <AWEFeedAnchorPresenterDelegate> {
    AWEPageContext *_interactionContext;
    NSString *_referString;
}

@property (retain, nonatomic) AWEMarkView *generalAnchorView;
@property (retain, nonatomic) AWEFeedAnchorBasePresenter *presenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasAnchorViewDataWithAwemeModelForFeed:(id)a0 extraInfo:(id)a1;
+ (BOOL)hasAnchorViewDataWithAwemeModelForBulletScreen:(id)a0 extraInfo:(id)a1;
+ (id)anchorType;

- (id)referString;
- (void)setReferString:(id)a0;
- (void)anchorViewWillShowOnSuperview;
- (void)updateWithAwemeModel:(id)a0 needPerformOnDisplay:(BOOL)a1;
- (id)anchorViewWithModel:(id)a0;
- (id /* block */)layoutWithAwemeModel:(id)a0 commonLayoutInfo:(id)a1;
- (void)alogWithInfo:(id)a0;
- (void)updateAnchorIconImage:(id)a0;
- (void)updateAnchorForLargeFontAdaptIfNeeded;
- (void)showWelfareAnchorInTwoLinesIfNeed;
- (void)handleAnchorViewTapped;
- (void)triggerViewAnimationWithType:(unsigned long long)a0 text:(id)a1;
- (void).cxx_destruct;
- (void)reset;
- (id)interactionContext;
- (void)setInteractionContext:(id)a0;

@end
