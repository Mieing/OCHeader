@class NSString;

@interface BEFlutterBrandNavigator : NSObject <FlutterNavigatorDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pushFromViewController:(id)a0 plugin:(id)a1 route:(id)a2 arguments:(id)a3;

@end
