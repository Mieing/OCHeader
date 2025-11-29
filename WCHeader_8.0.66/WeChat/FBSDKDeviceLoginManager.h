@class NSArray, NSString, NSURL, FBSDKDeviceLoginCodeInfo, NSNetService;
@protocol FBSDKDeviceLoginManagerDelegate;

@interface FBSDKDeviceLoginManager : NSObject <NSNetServiceDelegate> {
    FBSDKDeviceLoginCodeInfo *_codeInfo;
    BOOL _isCancelled;
    NSNetService *_loginAdvertisementService;
    BOOL _isSmartLoginEnabled;
}

@property (weak, nonatomic) id<FBSDKDeviceLoginManagerDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *permissions;
@property (copy, nonatomic) NSURL *redirectURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)initWithPermissions:(id)a0 enableSmartLogin:(BOOL)a1;
- (void)start;
- (void)cancel;
- (void)_notifyError:(id)a0;
- (void)_notifyToken:(id)a0;
- (void)_processError:(id)a0;
- (void)_schedulePoll:(unsigned long long)a0;
- (void)netService:(id)a0 didNotPublish:(id)a1;
- (void).cxx_destruct;

@end
