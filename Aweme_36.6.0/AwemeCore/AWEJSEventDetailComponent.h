@class NSMutableDictionary;

@interface AWEJSEventDetailComponent : AWEUserDetailBaseComponent

@property (retain, nonatomic) NSMutableDictionary *subscriberDict;

- (void)bindEvent;
- (void)bindReportEvent;
- (void).cxx_destruct;
- (id)user;
- (id)registerEvent:(id)a0 callback:(id /* block */)a1;
- (void)viewDidLoad;
- (void)dealloc;

@end
