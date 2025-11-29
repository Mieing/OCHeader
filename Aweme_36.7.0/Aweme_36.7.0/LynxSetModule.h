@class NSString, NSDictionary, LynxContext;

@interface LynxSetModule : NSObject <LynxContextModule> {
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


- (void)setEnableNewTransformOrigin:(BOOL)a0;
- (id)initWithLynxContext:(id)a0;
- (BOOL)getEnableLayoutOnly;
- (void)setAutoResumeAnimation:(BOOL)a0;
- (BOOL)getAutoResumeAnimation;
- (BOOL)getEnableNewTransformOrigin;
- (id)setUpSettingsDict;
- (void)switchLogToSystem:(BOOL)a0;
- (void)switchLogToSystem:(BOOL)a0;
- (void)getAllSettings:(id)a0 callback:(id /* block */)a1;
- (void)getAllSettings:(id)a0 callback:(id /* block */)a1;
- (void)switchKeyBoardDetect:(BOOL)a0;
- (id)getLogToSystemStatus;
- (void)switchAutomation:(BOOL)a0;
- (void)switchEnableLayoutOnly:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isAutomationEnabled;

@end
