@class NSString, NSTimer, LiveCore, IESLiveSecurityFeatureApi;
@protocol IESLiveClientAIService;

@interface IESLiveSecurityFeatureManager : NSObject <IESLiveSecurityFeatureService>

@property (weak, nonatomic) LiveCore *liveCore;
@property (retain, nonatomic) id<IESLiveClientAIService> clientAIService;
@property (retain, nonatomic) IESLiveSecurityFeatureApi *securityAPI;
@property (retain, nonatomic) NSTimer *featureTimer;
@property (nonatomic) double lastExecutionTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (id)userService;
- (void)setLiveCoreSesstion:(id)a0;
- (void)runAudienceFeature;
- (void)runAnchorFeature;
- (void)stopAnchorFeature;
- (id)currentAudienceVCRoomModel;
- (void)uploadSecurityFeature:(id)a0 isAnchor:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end
