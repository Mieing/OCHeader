@class NSString;
@protocol AWEAccountManagerProtocol;

@interface AWEHotsoonImportFansManager : NSObject <AWEHuoshanSyncHelperProtocol>

@property (retain, nonatomic) id<AWEAccountManagerProtocol> accountManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)titleLowVersion;
+ (id)textLowVersion;
+ (id)titleNotInstalled;
+ (id)textNotInstalled;
+ (id)sharedInstance;

@end
