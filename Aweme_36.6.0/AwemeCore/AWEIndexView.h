@class NSArray, AWEIndexViewConfiguration, UILabel, NSMutableArray, UITableView;
@protocol AWEIndexViewDelegate;

@interface AWEIndexView : UIControl

@property (retain, nonatomic) NSMutableArray *subIconLayers;
@property (retain, nonatomic) NSMutableArray *subTextLayers;
@property (retain, nonatomic) UILabel *indicator;
@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) BOOL isTouchingIndexView;
@property (nonatomic) BOOL isIndicatorShowingAnimated;
@property (retain, nonatomic) id generator;
@property (nonatomic) unsigned long long layers;
@property (weak, nonatomic) id<AWEIndexViewDelegate> delegate;
@property (copy, nonatomic) NSArray *iconDataSource;
@property (copy, nonatomic) NSArray *textDataSource;
@property (nonatomic) long long currentSection;
@property (readonly, nonatomic) AWEIndexViewConfiguration *configuration;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } indexViewFrame;
@property (retain, nonatomic) NSArray *indexRelations;

- (void)refreshLayer:(BOOL)a0;
- (void)onActionWithScroll;
- (void)configCurrentSection;
- (void)hideIndicator:(BOOL)a0;
- (void)showIndicator:(BOOL)a0;
- (void)onActionWithDidSelect;
- (void)configSubLayersAndSubviews:(BOOL)a0;
- (id)drawIndicatorPath;
- (id)initWithTableView:(id)a0 configuration:(id)a1;
- (void)updateAccessibilityFrame;
- (void)changeSection:(long long)a0;
- (void)scrollTableViewToCurrentSection;
- (void).cxx_destruct;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)cancelTrackingWithEvent:(id)a0;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)dealloc;
- (void)enableAccessibility;

@end
