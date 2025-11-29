@class AWEPerfFPSMetric, NSString, NSDictionary, AWEPerfLoadMetric, NSMutableDictionary, UIViewController;

@interface AWEPerfSession : NSObject <IESLLPerfSession> {
    NSMutableDictionary *_staticExtra;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *sceneName;
@property (copy, nonatomic) NSString *fromSceneName;
@property (readonly, weak, nonatomic) UIViewController *viewController;
@property (readonly, copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) id /* block */ extraBlock;
@property (retain, nonatomic) AWEPerfFPSMetric *fpsMetric;
@property (retain, nonatomic) AWEPerfLoadMetric *loadMetric;

+ (void)registerSessionForViewControllerClassName:(id)a0 usingBlock:(id /* block */)a1;
+ (BOOL)isEnabled;

- (void)setExtra:(id)a0 forKey:(id)a1;
- (void)iesll_setExtra:(id)a0 forKey:(id)a1;
- (void)iesll_setSubsceneName:(id)a0;
- (void).cxx_destruct;
- (void)addMetric:(id)a0;
- (void)dealloc;

@end
