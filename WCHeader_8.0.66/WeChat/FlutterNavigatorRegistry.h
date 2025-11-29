@class NSMutableDictionary;

@interface FlutterNavigatorRegistry : NSObject

@property (retain, nonatomic) NSMutableDictionary *navigatorMap;

+ (id)sharedInstance;

- (id)initPrivate;
- (void)registerNavigator:(id)a0 navigator:(id)a1;
- (void)unregisterNavigator:(id)a0;
- (id)getNavigator:(id)a0;
- (BOOL)pushFromViewController:(id)a0 plugin:(id)a1 route:(id)a2 arguments:(id)a3;
- (void).cxx_destruct;

@end
