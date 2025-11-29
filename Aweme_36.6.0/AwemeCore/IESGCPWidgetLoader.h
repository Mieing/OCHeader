@class NSMutableArray;

@interface IESGCPWidgetLoader : NSObject

@property (retain, nonatomic) NSMutableArray *widgetArray;

- (id)sceneStringWithScene:(long long)a0;
- (void)destroyWidgets;
- (void)createWidgetsWithScene:(long long)a0;
- (void)createWidgetWithWidgetClass:(Class)a0 scene:(long long)a1;
- (void).cxx_destruct;

@end
