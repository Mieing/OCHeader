@class NSString, JsWorkerIOS;

@interface CJPayIntelligenceManager : NSObject <CJPayIntelligenceService, CJPayTrackerObserver>

@property (retain, nonatomic) JsWorkerIOS *worker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (id)sharedInstance;

- (void)event:(id)a0 params:(id)a1;
- (void)asyncReadContentFrom:(id)a0 completion:(id /* block */)a1;
- (id)runTask:(id)a0 input:(id)a1;
- (void)runTask:(id)a0 input:(id)a1 callback:(id /* block */)a2;
- (void).cxx_destruct;
- (void)setup;

@end
