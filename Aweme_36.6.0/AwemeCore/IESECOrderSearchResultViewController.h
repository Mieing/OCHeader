@class IESECOrderListRequestViewModel;

@interface IESECOrderSearchResultViewController : IESECOrderListBaseViewController {
    IESECOrderListRequestViewModel *_requestViewModel;
}

- (id)skeletonView;
- (id)recommendURLString;
- (void)subscribeXBridgeEvent;
- (id)recommendExtraParams;
- (void)hideSkeletonView;
- (id)btmID;
- (void)reloadRecommendSection;
- (double)recommendCellHeight;
- (id)eventNameGULDidShow;
- (void)loadFinishWith:(BOOL)a0 error:(id)a1 isLynxRecommend:(BOOL)a2;
- (id)yataBizCode;
- (id)requestViewModel;
- (void)updateUIAfterFirstQueryFinishedWithResult:(BOOL)a0;
- (BOOL)shouldHideSkeletonViewAfterRecommendLoadFinish;
- (unsigned long long)skeletonHeaderType;
- (void)reloadUIOnProtocolDispatchEnd:(unsigned long long)a0 isAdjustSource:(BOOL)a1;
- (id)buyAgainBtmID;
- (void)setRequestViewModel:(id)a0;
- (long long)pageType;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)viewDidLoad;

@end
