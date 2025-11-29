@class IESGCPWidgetLoader;

@interface IESGCPBaseContainer : NSObject

@property (nonatomic) long long scene;
@property (retain, nonatomic) id diContainer;
@property (retain, nonatomic) IESGCPWidgetLoader *widgetLoader;

- (id)initWithScene:(long long)a0 diContainer:(id)a1;
- (void)createWidgets;
- (void)destroyContainer;
- (void).cxx_destruct;

@end
