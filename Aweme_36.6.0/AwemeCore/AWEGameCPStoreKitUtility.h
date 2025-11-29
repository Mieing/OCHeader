@class NSString;

@interface AWEGameCPStoreKitUtility : NSObject <AWEGameCPStoreKitInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)util;

- (void)trackWithAwemeModel:(id)a0 scene:(id)a1 btnType:(id)a2 actionType:(id)a3 referString:(id)a4 location:(id)a5 extra:(id)a6;
- (void)trackUsingStoreKitWithAwemeModel:(id)a0 scene:(id)a1 btnType:(id)a2 actionType:(id)a3 referString:(id)a4 location:(id)a5 extra:(id)a6;

@end
