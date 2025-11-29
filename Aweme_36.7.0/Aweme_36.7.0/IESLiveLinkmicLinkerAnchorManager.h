@class IESLiveLinkmicLinkerAnchorModel, HTSLiveInteractiveAPIV2, IESLiveInteractiveMediaService, IESLiveInteractiveLinkService, IESLiveCountTimer, IESLiveInteractiveUserService;

@interface IESLiveLinkmicLinkerAnchorManager : NSObject

@property (retain, nonatomic) IESLiveInteractiveUserService *userService;
@property (retain, nonatomic) IESLiveInteractiveLinkService *linkService;
@property (retain, nonatomic) IESLiveInteractiveMediaService *mediaService;
@property (retain, nonatomic) HTSLiveInteractiveAPIV2 *api;
@property (retain, nonatomic) IESLiveLinkmicLinkerAnchorModel *model;
@property (retain, nonatomic) IESLiveCountTimer *multiChannelBackupTimer;

- (void)stopMultiChannelInfoBackupTimer;
- (void)checkMultiChannelInfoWithSource:(unsigned long long)a0;
- (BOOL)enableCheckUnexpectMorePush;
- (BOOL)shouldCheckUnexpectMorePush;
- (BOOL)enableCheckUnexpectLessPush;
- (void)checkUnexpectLessPushWithFirstFrameID:(id)a0;
- (void)startMultiChannelInfoBackupTimer;
- (void).cxx_destruct;

@end
