@class NSMutableDictionary, WCFinderSteamProfileHeaderTheme, NSArray, NSMutableSet, NSMutableArray;
@protocol WCFinderProfileCardContainerExposeDelegate;

@interface WCFinderProfileCardContainer : UIView {
    struct multimap<NSString *, UIView *, ClassIdentifyEqual, std::allocator<std::pair<NSString *const, UIView *>>> { struct __tree<std::__value_type<NSString *, UIView *>, std::__map_value_compare<NSString *, std::__value_type<NSString *, UIView *>, ClassIdentifyEqual>, std::allocator<std::__value_type<NSString *, UIView *>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<NSString *, UIView *>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<NSString *, std::__value_type<NSString *, UIView *>, ClassIdentifyEqual>> { unsigned long long __value_; } __pair3_; } __tree_; } _classMap;
}

@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) WCFinderSteamProfileHeaderTheme *theme;
@property (retain, nonatomic) NSMutableArray *lineViews;
@property (retain, nonatomic) NSMutableArray *elements;
@property (nonatomic) BOOL showBlurBG;
@property (retain, nonatomic) NSMutableDictionary *viewClassMap;
@property (retain, nonatomic) NSArray *displayViewArray;
@property (retain, nonatomic) NSMutableSet *exposedItems;
@property (weak, nonatomic) id<WCFinderProfileCardContainerExposeDelegate> exposeDelegate;

+ (BOOL)shouldDisplayViewWithTy:(long long)a0 withData:(id)a1;
+ (void)updateView:(id)a0 ty:(long long)a1 withData:(id)a2 scene:(unsigned long long)a3;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scene:(unsigned long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withTheme:(id)a1 scene:(unsigned long long)a2;
- (void)registerViews;
- (void)update:(id /* block */)a0;
- (void)updateWithCards:(struct vector<WCFinderProfileCard, std::allocator<WCFinderProfileCard>> { struct WCFinderProfileCard *x0; struct WCFinderProfileCard *x1; struct __compressed_pair<WCFinderProfileCard *, std::allocator<WCFinderProfileCard>> { struct WCFinderProfileCard *x0; } x2; })a0;
- (void)pushCacheView:(id)a0;
- (id)popCacheView:(Class)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)displayedViews;
- (void)updateElementsLayout:(id)a0;
- (void)layoutLinesWithCount:(id)a0;
- (void)ensureLinesWithCount:(long long)a0;
- (void)installElements:(id)a0;
- (void)unInstallViews:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
