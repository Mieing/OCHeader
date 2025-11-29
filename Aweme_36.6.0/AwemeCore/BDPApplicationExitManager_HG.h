@class NSTimer, BDPUniqueID;

@interface BDPApplicationExitManager_HG : NSObject {
    BOOL _isWaiting;
    NSTimer *_timer;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) BOOL fromOnBeforeCloseReturnSync;

+ (id)sharedManager;

- (void)exitAppIfNeedWithUniqueID:(id)a0;
- (void)exitAppResult:(BOOL)a0;
- (void).cxx_destruct;

@end
