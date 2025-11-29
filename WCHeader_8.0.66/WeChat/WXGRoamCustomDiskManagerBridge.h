@class CustomRoamDiskManagerCallback, NSString;

@interface WXGRoamCustomDiskManagerBridge : NSObject <CustomRoamDiskManagerBase>

@property (retain, nonatomic) CustomRoamDiskManagerCallback *diskManagerCb;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
