@interface IESGCPBaseWidget : NSObject

@property (nonatomic) long long scene;

+ (BOOL)widgetShouldBeActivatedWithDIContext:(id)a0;

- (void)widgetDidCreate;
- (void)widgetWillDestroy;
- (void)widgetBindService;
- (id)initWithScene:(long long)a0;

@end
