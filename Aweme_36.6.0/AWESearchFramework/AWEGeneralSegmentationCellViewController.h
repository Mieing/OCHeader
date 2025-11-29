@class NSString, AWEGeneralSearchModel, UILabel, UIButton;
@protocol AWEModernFeedCellContext;

@interface AWEGeneralSegmentationCellViewController : UIViewController <AWEModernFeedCellControllerProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *refreshButton;
@property (retain, nonatomic) AWEGeneralSearchModel *searchModel;
@property (retain, nonatomic) id<AWEModernFeedCellContext> context;
@property (retain, nonatomic) Class cardClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)modernFeedCellPreferedHeightForModel:(id)a0 width:(double)a1;
+ (void)__awe__codeRunnerRun_32;

- (void)configUI;
- (void)resetContext:(id)a0;
- (void)trackSearchResultShowEvent;
- (void)trackSearchResultClickEvent;
- (void)refreshTap:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)viewDidLoad;
- (void)updateWithModel:(id)a0;
- (id)fetchContext;

@end
