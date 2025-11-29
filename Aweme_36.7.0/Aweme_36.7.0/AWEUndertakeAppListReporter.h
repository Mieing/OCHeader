@class NSString;

@interface AWEUndertakeAppListReporter : NSObject <BDUGDeviceCollectDelegate>

@property (nonatomic) BOOL coldLaunchReport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

@end
