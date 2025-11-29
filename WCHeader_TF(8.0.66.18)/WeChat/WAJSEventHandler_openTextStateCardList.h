@class TextStateCardListSlidingWindowRefreshTask, NSArray, NSString, TextStateCardListViewController, MMUINavigationController;

@interface WAJSEventHandler_openTextStateCardList : WAJSEventHandler_BaseEvent <TextStateCardListDataProvider, TextStateCardListDelegate, MultipleTextStateCardViewDataSource, TextStateMgrExt>

@property (nonatomic) unsigned long long beginIndex;
@property (retain, nonatomic) NSArray *textStateList;
@property (retain, nonatomic) NSString *currentTextStateId;
@property (retain, nonatomic) TextStateCardListSlidingWindowRefreshTask *task;
@property (retain, nonatomic) TextStateCardListViewController *cardListViewController;
@property (retain, nonatomic) MMUINavigationController *navigationController;
@property (nonatomic) BOOL enableExpose;
@property (nonatomic) BOOL shouldShowLocationDistance;
@property (nonatomic) unsigned int likeSource;
@property (nonatomic) unsigned long long requestId;
@property (retain, nonatomic) NSString *sceneSessionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (unsigned long long)count;
- (void)configureCardView:(id)a0 atIndex:(unsigned long long)a1;
- (void)onChangeToCardAtIndex:(unsigned long long)a0;
- (void)configureSingleCardView:(id)a0 forMultipleCardView:(id)a1;
- (void)onNewTextStateSquareRefreshCardListSlidingWindow:(id)a0;
- (void).cxx_destruct;

@end
