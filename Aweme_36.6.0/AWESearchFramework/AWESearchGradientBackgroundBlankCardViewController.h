@class NSString, AWEGeneralSearchModel, CAGradientLayer;
@protocol AWEModernFeedCellContext;

@interface AWESearchGradientBackgroundBlankCardViewController : UIViewController <AWESearchCachalotCardViewProtocol, AWEModernFeedCellControllerProtocol>

@property (retain, nonatomic) AWEGeneralSearchModel *searchModel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) id<AWEModernFeedCellContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) Class cardClass;

+ (double)modernFeedCellPreferedHeightForModel:(id)a0 width:(double)a1;
+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;

- (void)themeDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)init;
- (void)addObserver;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;
- (void)updateWithModel:(id)a0;

@end
