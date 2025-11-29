@class NSString, LynxContext;

@interface LynxKryptonTelemetryService : NSObject <KryptonTelemetryService> {
    LynxContext *_weakLynxContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reportEvent:(id)a0 params:(id)a1;
- (id)initWithLynxContext:(id)a0;
- (void).cxx_destruct;

@end
