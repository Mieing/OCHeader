@class NSDictionary, NSString;

@interface IESSecurityBridgeCheckerEngine : NSObject <IESSecurityBridgeCheckerProtocol>

@property (copy) NSDictionary *yordSessions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preMatchRulesWithAppID:(id)a0 containerType:(unsigned long long)a1;
+ (BOOL)checkBridgeCallableWithBridgeContext:(id)a0 containerType:(unsigned long long)a1;
+ (id)convertCtx:(id)a0 withContainer:(unsigned long long)a1;
+ (id)nameSpaceStrWithType:(unsigned long long)a0;
+ (id)shared;

@end
