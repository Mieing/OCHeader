@class NSString, NSDictionary, LynxContext;

@interface LynxExposureModule : NSObject <LynxContextModule> {
    LynxContext *context_;
}

@property (class, readonly, copy, nonatomic) NSString *name;
@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;
@property (class, readonly, copy, nonatomic) NSDictionary *attributeLookup;

@property (retain, nonatomic) id extraData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithLynxContext:(id)a0;
- (void)setObserverFrameRate:(id)a0;
- (void)runOnUIThreadSafely:(id /* block */)a0;
- (void)stopExposure:(id)a0;
- (void)resumeExposure;
- (void).cxx_destruct;
- (id)exposure;

@end
