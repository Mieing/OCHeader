@class BDPModel;
@protocol BDPFileHandleProtocol;

@interface BDPAppLoadCache : NSObject

@property (nonatomic) long long removeType;
@property (retain, nonatomic) BDPModel *inUseModel;
@property (retain, nonatomic) BDPModel *updateModel;
@property (nonatomic) long long inUseStatus;
@property (nonatomic) long long updateStatus;
@property (nonatomic) BOOL isExpired;
@property (nonatomic) BOOL expiredCacheForbidden;
@property (retain, nonatomic) BDPModel *expiredLaunchModel;
@property (nonatomic) BOOL shouldDownloadPkg;
@property (retain, nonatomic) id foregroundAppTask;
@property (retain, nonatomic) BDPModel *launchModel;
@property (retain, nonatomic) id<BDPFileHandleProtocol> reader;

- (void).cxx_destruct;

@end
