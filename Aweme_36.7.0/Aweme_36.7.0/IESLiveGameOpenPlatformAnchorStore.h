@class IESLiveGameOpenPlatformAnchorDebugHandler;

@interface IESLiveGameOpenPlatformAnchorStore : NSObject

@property (retain, nonatomic) IESLiveGameOpenPlatformAnchorDebugHandler *debugHandler;

- (void)didSetAttachingDIContext;
- (id)initWithComponentContext:(id)a0 eventContext:(id)a1 room:(id)a2;
- (void)didLoadPhaseIdleComplete;
- (void).cxx_destruct;

@end
