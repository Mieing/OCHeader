@class NSString, AWESearchHybridSceneFadeCardView;

@interface AWESearchHybridSceneFadeCardViewController : UIViewController <AWESearchCachalotCardViewProtocol>

@property (retain, nonatomic) AWESearchHybridSceneFadeCardView *fadeView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;

- (void)themeDidChange:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addObserver;
- (void)viewDidLoad;
- (void)dealloc;
- (id)componentView;

@end
