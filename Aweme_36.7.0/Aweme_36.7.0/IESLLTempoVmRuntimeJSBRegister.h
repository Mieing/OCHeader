@class NSString, NSMutableArray;

@interface IESLLTempoVmRuntimeJSBRegister : NSObject <IESLLTempoVmRuntimeJSBRegisterProtocol>

@property (retain, nonatomic) NSMutableArray *jsbClassArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getJSBridges;
+ (void)registerJSBridges:(id)a0;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
