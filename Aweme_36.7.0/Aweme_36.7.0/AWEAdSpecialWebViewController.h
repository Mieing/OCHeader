@interface AWEAdSpecialWebViewController : AWEAdWebViewController

@property (nonatomic) unsigned long long category;

- (id)initWithAwemeModel:(id)a0 category:(unsigned long long)a1;
- (void)trackStayTime;
- (void)setWebViewClear;
- (id)init;
- (void)viewDidLoad;

@end
