@class BDPOfflinePackage;

@interface BDPOfflinePackageTask : NSObject

@property (nonatomic) long long taskStatus;
@property (retain, nonatomic) BDPOfflinePackage *offlinePackage;

- (void).cxx_destruct;

@end
