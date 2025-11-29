@class NSString;

@interface WAKeyReporterProxy : NSObject <IWAKeyReporterService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)logFeatureExtIDkey:(unsigned int)a0 key:(unsigned int)a1 value:(unsigned int)a2 isKeyLog:(BOOL)a3;
+ (void)logFeatureExtIDkey:(unsigned int)a0 key:(unsigned int)a1 value:(unsigned int)a2 isKeyLog:(BOOL)a3 isIgnoreFreqCheck:(BOOL)a4;
+ (void)logFeatureExtIDkeyList:(const void *)a0 isKeyLog:(BOOL)a1;


@end
