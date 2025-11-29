@class NSString;

@interface MJTemplateVersionInfo : NSObject <PBCoding, NSCopying>

@property (nonatomic) unsigned long long iOSSDKVersionMin;
@property (nonatomic) unsigned long long iOSSDKVersionMax;
@property (nonatomic) unsigned long long AndroidSDKVersionMin;
@property (nonatomic) unsigned long long AndroidSDKVersionMax;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_iOSSDKVersionMin;
+ (void)PBArrayAdd_iOSSDKVersionMax;
+ (void)PBArrayAdd_AndroidSDKVersionMin;
+ (void)PBArrayAdd_AndroidSDKVersionMax;
+ (void)initialize;

@end
