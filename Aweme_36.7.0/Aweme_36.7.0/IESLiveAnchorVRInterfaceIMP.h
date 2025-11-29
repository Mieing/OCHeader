@class NSString;

@interface IESLiveAnchorVRInterfaceIMP : NSObject <IESLiveAnchorVRInterface>

@property (nonatomic) BOOL isVRLive;
@property (nonatomic) unsigned long long liveType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)attachingDIContext;
- (void)switchVRLiveMode:(BOOL)a0;
- (BOOL)isVRLiveMode;
- (struct CGSize { double x0; double x1; })fisheyeOutputSize;
- (void)forceSwitchVRLiveModePanoramic;
- (void)resumeVRLiveMode;
- (void)recordLiveType:(unsigned long long)a0;
- (unsigned long long)currentLiveType;
- (BOOL)canResponseLiveRealTimeDataGesture;

@end
