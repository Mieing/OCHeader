@class NSString, NSMutableSet, NSMutableDictionary;

@interface AWEFeedLLMRecommendSurveyController : AWEBaseController <AWEFeedControllerProtocol>

@property (retain, nonatomic) NSMutableSet *didPlayAwemeSet;
@property (retain, nonatomic) NSMutableDictionary *surveyStatusCacheDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;

- (void)tableView:(id)a0 didEndDisplayingCellBeforeReset:(id)a1 forRowAtIndexPath:(id)a2;
- (void)configureCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (void)handleAppWillResignActive:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
