@class NSString, IESLiveInteractiveMediaService, HTSLiveLinkMicMethod, IESLiveInteractionGuestPreviewView;

@interface IESLiveBigPartyResumeFromPKData : NSObject <IESLiveInteractionLinkerResumeContextProtocol>

@property (retain, nonatomic) IESLiveInteractiveMediaService *mediaService;
@property (retain, nonatomic) IESLiveInteractionGuestPreviewView *previewView;
@property (nonatomic) BOOL hasSwitchSceneMessage;
@property (retain, nonatomic) HTSLiveLinkMicMethod *switchSceneMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
