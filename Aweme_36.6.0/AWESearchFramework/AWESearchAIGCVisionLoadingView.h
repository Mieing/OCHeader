@class LOTAnimationView, NSString;
@protocol AWEModernFeedCellContext;

@interface AWESearchAIGCVisionLoadingView : UIViewController <AWEModernFeedCellControllerProtocol, AWESearchCachalotCardViewProtocol>

@property (retain, nonatomic) LOTAnimationView *lottieView;
@property (retain, nonatomic) id<AWEModernFeedCellContext> context;
@property (retain, nonatomic) Class cardClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)modernFeedCellPreferedHeightForModel:(id)a0 width:(double)a1;
+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)viewDidLoad;
- (id)componentView;
- (void)createUI;

@end
