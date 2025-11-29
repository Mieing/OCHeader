@class NSString, NSMutableDictionary, NSMutableSet, UIView, NSMutableArray, NSArray;

@interface IESLiveAccessibilityUnit : NSObject

@property (retain, nonatomic) NSString *identify;
@property (weak, nonatomic) UIView *wrapView;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSMutableArray *configs;
@property (retain, nonatomic) NSMutableArray *accessNodes;
@property (retain, nonatomic) NSMutableDictionary *nodeIndexs;
@property (retain, nonatomic) NSMutableSet *allPtrSet;
@property (retain, nonatomic) NSArray *cacheElements;
@property (copy, nonatomic) id /* block */ orderCallback;
@property (nonatomic) BOOL groupReset;

- (id)dealWithAccessibilityElements:(id)a0 cache:(BOOL)a1;
- (void)unInstall;
- (void)traverseAllSubView:(id)a0;
- (void)preprocesInsertWithElement:(id)a0;
- (id)findAllValidElements;
- (void)traverseView:(id)a0;
- (void)addWithDuplicateObject:(id)a0;
- (BOOL)shouldGroupAccessibility:(id)a0;
- (void)insertToPortrait:(id)a0;
- (void)insertConfig:(id)a0;
- (void).cxx_destruct;
- (void)insertItem:(id)a0;
- (void)dealloc;
- (void)install;

@end
