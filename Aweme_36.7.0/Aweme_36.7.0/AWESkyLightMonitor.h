@class NSMutableDictionary;

@interface AWESkyLightMonitor : NSObject

@property (retain, nonatomic) NSMutableDictionary *monitorDic;

+ (id)sharedInstance;

- (id)actionNameForAction:(long long)a0;
- (id)tabNameForType:(long long)a0;
- (void)startQueryTabType:(long long)a0 action:(long long)a1;
- (void)didQueryEndTabType:(long long)a0 error:(id)a1;
- (void)didRenderEndTabType:(long long)a0;
- (void).cxx_destruct;

@end
