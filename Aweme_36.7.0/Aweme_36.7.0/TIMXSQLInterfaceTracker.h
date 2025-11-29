@class NSString, TIMXSDKInstance;

@interface TIMXSQLInterfaceTracker : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (nonatomic) BOOL isSplit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableReport;
- (void)reportWithDuration:(double)a0 caller:(id)a1 selector:(SEL)a2 line:(long long)a3;
- (BOOL)shouldReportWithEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
