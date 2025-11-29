@class NSDictionary, AWEDPlayerInteractionViewLayoutConfig, NSArray;
@protocol AWEDPlayerActionDelegate;

@interface AWEDPlayerInteractionViewConfig : NSObject

@property (copy, nonatomic) NSDictionary *elementTypeMapName;
@property (copy, nonatomic) NSDictionary *elementNameMapType;
@property (copy, nonatomic) NSDictionary *controllerTypeMapName;
@property (copy, nonatomic) NSDictionary *controllerNameMapType;
@property (nonatomic) unsigned long long interactionViewType;
@property (retain, nonatomic) AWEDPlayerInteractionViewLayoutConfig *layoutConfig;
@property (weak, nonatomic) id<AWEDPlayerActionDelegate> actionDelegate;
@property (nonatomic) double enterQuietModeDuration;
@property (nonatomic) BOOL enterQuietWithAnimation;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hitTestEdgeInsets;
@property (copy, nonatomic) NSArray *gradientColors;
@property (nonatomic) long long loadingType;
@property (nonatomic) BOOL useModernStyle;
@property (copy, nonatomic) NSArray *elementConfigArray;
@property (copy, nonatomic) NSArray *topElementsArray;
@property (copy, nonatomic) NSArray *videoInfoElementsArray;
@property (copy, nonatomic) NSArray *middleElementsArray;
@property (copy, nonatomic) NSArray *bottomElementsArray;
@property (copy, nonatomic) NSArray *controllerConfigArray;
@property (copy, nonatomic) NSArray *belowControllersArray;
@property (copy, nonatomic) NSArray *aboveControllersArray;
@property (nonatomic) unsigned long long singleTapActionType;

+ (id)cardPlayerViewConfigWithBlock:(id /* block */)a0;
+ (id)fullPlayerViewConfigWithBlock:(id /* block */)a0;

- (unsigned long long)controllerTypeWithName:(id)a0;
- (unsigned long long)elementTypeWithName:(id)a0;
- (id)controllerNameWithType:(unsigned long long)a0;
- (void)buildDefaultElementMapName;
- (void)buildDefaultControllerMapName;
- (id)elementNameWithType:(unsigned long long)a0;
- (void)registerElement:(id)a0 forType:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)registerController:(id)a0 forType:(unsigned long long)a1;

@end
