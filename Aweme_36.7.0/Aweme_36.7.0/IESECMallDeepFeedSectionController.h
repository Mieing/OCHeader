@class NSString, IESECMallDeepFeedAutoPlayManager, IESECMallDeepFeedRecommendCardModel;
@protocol IESECMallDeepFeedAutoPlayManagerDelegate;

@interface IESECMallDeepFeedSectionController : IGListSectionController <IGListWorkingRangeDelegate> {
    IESECMallDeepFeedRecommendCardModel *_newModel;
}

@property (nonatomic) BOOL firstCardHasStart;
@property (weak, nonatomic) IESECMallDeepFeedAutoPlayManager<IESECMallDeepFeedAutoPlayManagerDelegate> *autoPlayManager;
@property (nonatomic) long long notFullScreenCellCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (void)listAdapter:(id)a0 sectionControllerWillEnterWorkingRange:(id)a1;
- (void)listAdapter:(id)a0 sectionControllerDidExitWorkingRange:(id)a1;
- (void)didUpdateToObject:(id)a0;
- (id)workingRangeDelegate;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
