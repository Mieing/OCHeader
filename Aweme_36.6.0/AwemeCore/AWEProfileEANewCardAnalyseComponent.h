@class NSString, NSMutableSet;

@interface AWEProfileEANewCardAnalyseComponent : AWEProfileEABaseController <AWEProfileEADataSourceEvent>

@property (retain, nonatomic) NSMutableSet *cardTypeSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cardDataSourceDidRefresh;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
