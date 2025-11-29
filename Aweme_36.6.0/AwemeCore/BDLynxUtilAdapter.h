@class NSString;

@interface BDLynxUtilAdapter : NSObject <BDLUtilProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)event:(id)a0 params:(id)a1;
- (void)trackData:(id)a0 logTypeStr:(id)a1;
- (void)trackService:(id)a0 value:(float)a1 extra:(id)a2;
- (void)keyLog:(id)a0;
- (void)openSchema:(id)a0;

@end
