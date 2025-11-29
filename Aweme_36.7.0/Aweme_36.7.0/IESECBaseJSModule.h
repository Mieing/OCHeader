@class NSString;

@interface IESECBaseJSModule : NSObject <JSModule, IESECBaseJSModuleMethodProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)methodLookup;
+ (id)name;

- (void)publishEventWithName:(id)a0 params:(id)a1;
- (void)sendLogV3:(id)a0 params:(id)a1;
- (void)logWithMessage:(id)a0 level:(int)a1;
- (void)reportALog:(id)a0 message:(id)a1 tag:(id)a2;
- (id)getUserInfo;
- (id)getAppInfo;

@end
