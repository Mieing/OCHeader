@interface AWESimPlayerService : NSObject

+ (BOOL)enableSimPlayerV2:(id)a0 model:(id)a1;
+ (BOOL)enableSimPlayerV2PrefetchBSModule;
+ (BOOL)enableSimPlayerV2BSModelTransfomer;
+ (BOOL)enableSimPlayerV2SRModule;
+ (BOOL)enableSimPlayerV2;
+ (BOOL)enableSimPlayerV2EventTrackingForAWEVC;
+ (BOOL)enableSimPlayerV2BSModule;
+ (BOOL)enableSimPlayerV2EventTracking;
+ (BOOL)isSimPlayerV2:(id)a0;
+ (BOOL)enableSimPlayerV2Exp;
+ (BOOL)enableSimPlayerWhitelist;
+ (void)setLoggerFlag:(int)a0;
+ (BOOL)enableSimPlayerV2:(id)a0;
+ (BOOL)enableSimPlayerV2EventTrackingVerification;
+ (id)simplayerSignature:(id)a0;
+ (void)setupConfig;

@end
