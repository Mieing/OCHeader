@class NSString;

@interface AWEEcomSearchPendantHelper : NSObject <AWEEcomSearchPendantHelperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)removeWithTargetPage:(id)a0 rit:(id)a1 component:(id)a2;
+ (void)registerWithTargetPage:(id)a0 bizParams:(id)a1;
+ (void)showWithTargetPage:(id)a0 container:(id)a1 bizParams:(id)a2 callback:(id /* block */)a3;
+ (void)showWithTargetPage:(id)a0 container:(id)a1 jsonString:(id)a2 commonLogParams:(id)a3 extra:(id)a4;
+ (void)showWithTargetPage:(id)a0 container:(id)a1 activityModel:(id)a2 commonLogParams:(id)a3 extra:(id)a4;
+ (void)sendEvent:(id)a0 withTargetPage:(id)a1 params:(id)a2;
+ (BOOL)enableNewStructWithActivityModel:(id)a0;


@end
