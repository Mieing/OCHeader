@class NSString;

@interface IESLiveAnchorGuideServiceImpl : IESLiveGeneralBaseService <IESLiveAnchorGuideService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

- (BOOL)isResumeRequestChecking;
- (id)chatroomResumeModel;
- (BOOL)canSetCameraActive;
- (id)getFansInfoPromptShowData;
- (id)getTrackSubscene:(long long)a0;
- (void)setCameraActive:(BOOL)a0;

@end
