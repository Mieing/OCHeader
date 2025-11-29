@class NSString, NSDictionary;
@protocol IESLatchModuleDelegate;

@interface IESLatchModule : NSObject <JSModule>

@property (class, readonly, copy, nonatomic) NSString *name;
@property (class, readonly, copy, nonatomic) NSDictionary *methodLookup;
@property (class, readonly, copy, nonatomic) NSDictionary *attributeLookup;

@property (weak, nonatomic) id<IESLatchModuleDelegate> delegate;
@property (nonatomic) double startTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithParam:(id)a0;
- (void)returnValue:(id)a0;
- (id)getGlobalProps;
- (id)getFromInitialProps:(id)a0;
- (void)onErrorWithOccasion:(long long)a0 message:(id)a1 extra:(id)a2;
- (void)onLogWithOccasion:(long long)a0 message:(id)a1;
- (void)readyToRunScript;
- (void)initJsFinished;
- (id)getSDKVersion;
- (void).cxx_destruct;
- (id)init;
- (void)attach:(id)a0;

@end
