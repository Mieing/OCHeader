@interface WCResourceloaderState : NSObject

@property (nonatomic) BOOL bLiklyInResourceloaderBug;
@property (nonatomic) BOOL bBugOccurAfterSeek;
@property (nonatomic) unsigned int bugOccurTime;
@property (nonatomic) unsigned int seekTime;
@property (nonatomic) BOOL bRecoverChecked;
@property (nonatomic) BOOL bResetToSystemPlayer;
@property (nonatomic) float resourceloaderRespSec;

- (void)resetIndicators;
- (void)resourceloaderliklyInBugState;
- (BOOL)shouldCheckRecoverStateWithPreloadSec:(float)a0;

@end
