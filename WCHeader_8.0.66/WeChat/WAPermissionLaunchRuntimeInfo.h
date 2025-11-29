@class NSString;

@interface WAPermissionLaunchRuntimeInfo : NSObject <PBCoding, WCTColumnCoding>

@property (nonatomic) unsigned int blockReason;
@property (nonatomic) BOOL canShowStartWording;
@property (retain, nonatomic) NSString *sdkJsapiInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_blockReason;
+ (void)PBArrayAdd_canShowStartWording;
+ (void)PBArrayAdd_sdkJsapiInfo;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

@end
