@class NSMutableDictionary;

@interface AWEUGFrontEndInteractionController : AWEPlayInteractionNewBaseController

@property (retain, nonatomic) NSMutableDictionary *subscriberMap;

- (void)setHide:(BOOL)a0;
- (void)removeControllerFromSuperView;
- (void)setupObserver;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (id)init;
- (void)reset;
- (void)viewDidLoad;
- (void)dealloc;

@end
