@class NSString, NSMutableSet;

@interface AWEProfileEARedDotReportComponent : AWEProfileEABaseController <AWEProfileEACollectionViewEvent, AWEProfileEACardLifeCycleEvent>

@property (nonatomic) BOOL hasCheckRedDotShowAfterInitialize;
@property (retain, nonatomic) NSMutableSet *hasReportRedDotCards;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cardWillDisplayAtIndexPath:(id)a0;
- (void)checkReportRedDotShow;
- (void)checkReportRedDotShowWithCardView:(id)a0 cardModel:(id)a1;
- (BOOL)hasReportRedDotShowWithCardModel:(id)a0;
- (void)reportRedDotShowWithCardModel:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;

@end
