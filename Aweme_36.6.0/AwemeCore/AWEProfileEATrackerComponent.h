@class NSString, NSMutableSet, NSDate, NSIndexPath;

@interface AWEProfileEATrackerComponent : AWEProfileEABaseController <AWEProfileEACardLifeCycleEvent, AWEProfileEADataSourceEvent, AWEProfileEACollectionViewEvent>

@property (retain, nonatomic) NSDate *lastDate;
@property (retain, nonatomic) NSIndexPath *selectIndexPath;
@property (retain, nonatomic) NSMutableSet *hasTrackedCell_New;
@property (nonatomic) BOOL shouldTrackCardAppear;
@property (nonatomic) BOOL isUserModelRefetched;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWELiteUGSocialModuleAdapterClass;

- (id)enterFrom;
- (id)aAWELiteUGSocialModuleAdapter;
- (void)cardDidLoadAtIndexPath:(id)a0;
- (void)cardWillDisplayAtIndexPath:(id)a0;
- (void)cardDidClickAtIndexPath:(id)a0;
- (void)cardDataSourceFinishRefresh;
- (void)trackStayDuration;
- (void)trackFunctionShow;
- (void)trackFunctionShowWithIndexPath:(id)a0;
- (id)cardIndexWithIndexPath:(id)a0;
- (id)commonTrackerParamsForCardType:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)viewWillAppear;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;

@end
