@class NSString;

@interface MainPlugin : NSObject <IOpenSecurityGuardPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getMetaInfo;
+ (void *)initializePlugin:(void *)a0;
+ (void *)nativeEntry;


@end
