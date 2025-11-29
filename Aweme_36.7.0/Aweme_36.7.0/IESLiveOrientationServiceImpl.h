@class NSString;

@interface IESLiveOrientationServiceImpl : NSObject <IESLiveOrientationService>

@property (nonatomic) BOOL isLandscapeStatus;
@property (nonatomic) BOOL isFullScreenStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)setLandscapeStatus:(BOOL)a0;
- (BOOL)currentRoomIsLandscapeEnableNowWithDIContext:(id)a0;
- (BOOL)couldDisableLandscapeMission;
- (void)setFullScreen:(BOOL)a0;
- (BOOL)isFullScreen;
- (BOOL)isLandscape;

@end
