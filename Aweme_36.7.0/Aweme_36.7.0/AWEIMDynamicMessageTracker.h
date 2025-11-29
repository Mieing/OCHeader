@interface AWEIMDynamicMessageTracker : NSObject

+ (void)trackMessageEventWithModel:(id)a0;
+ (BOOL)checkTrackInfoDataIsValid:(id)a0 withMessage:(id)a1;
+ (id)clientCommonParamsWithMessage:(id)a0 context:(id)a1;
+ (void)trackMessageShowIfNeeded:(id)a0 context:(id)a1;
+ (void)trackMessageClickIfNeeded:(id)a0 context:(id)a1 paramsKey:(id)a2;

@end
