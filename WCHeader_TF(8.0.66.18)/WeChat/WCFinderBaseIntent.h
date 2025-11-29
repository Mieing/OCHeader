@class NSString;

@interface WCFinderBaseIntent : NSObject <IWCFinderIntentDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)hashIntent;
- (void)putKey:(id)a0 andVal:(id)a1;
- (id)getValByKey:(id)a0;
- (id)traceValByKey:(id)a0;
- (BOOL)bindPreviousIntent:(id)a0;
- (BOOL)clearIntent;
- (void)dealloc;

@end
