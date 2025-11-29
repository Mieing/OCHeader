@class NSArray, NSString, UIView, NSMutableArray;
@protocol AWEModernFeedCellContext;

@interface AWESearchHotspotMultiTabCellController : UIViewController <AWEModernFeedCellControllerProtocol>

@property (retain, nonatomic) id<AWEModernFeedCellContext> context;
@property (copy, nonatomic) NSArray *tabConfigs;
@property (nonatomic) long long tabType;
@property (retain, nonatomic) NSMutableArray *usingItems;
@property (retain, nonatomic) NSMutableArray *reuseItems;
@property (nonatomic) long long selecedIndex;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) Class cardClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)modernFeedCellPreferedHeightForModel:(id)a0 width:(double)a1;
+ (void)__awe__codeRunnerRun_230;

- (void)p_attachItemsToView;
- (void)p_freeAllItemsIfNeeded;
- (id)p_getReuseItem;
- (void)p_handleClick:(id)a0 atIndex:(long long)a1 notifyChange:(BOOL)a2;
- (BOOL)switchToTabChannel:(id)a0 notifyChange:(BOOL)a1;
- (void)p_notifyClickToDelegate;
- (void)p_freeAllItems;
- (void)p_freeItemToReuse:(id)a0;
- (BOOL)switchToTabChannel:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)viewDidLoad;
- (void)updateWithModel:(id)a0;

@end
