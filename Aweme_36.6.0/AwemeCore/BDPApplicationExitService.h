@class NSTimer, BDPUniqueID, NSString;

@interface BDPApplicationExitService : NSObject <BDPApplicationExitServiceInterface>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL isWaiting;
@property (nonatomic) BOOL fromOnBeforeCloseReturnSync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

@end
