@class NSString, IESECMallInnerFeedImmersionAutoPlayManager, IESECMallInnerFeedRecommendCardModel;
@protocol IESECMallInnerFeedImmersionAutoPlayManagerDelegate;

@interface IESECMallInnerFeedImmersionSectionController : IGListSectionController <IGListWorkingRangeDelegate> {
    IESECMallInnerFeedRecommendCardModel *_newModel;
}

@property (nonatomic) BOOL firstCardHasStart;
@property (nonatomic) long long mallImmersionGuideCellCount;
@property (weak, nonatomic) IESECMallInnerFeedImmersionAutoPlayManager<IESECMallInnerFeedImmersionAutoPlayManagerDelegate> *autoPlayManager;
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
- (id)init;
- (void)didSelectItemAtIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
