@class NSString, UIViewController;
@protocol IESLiveFeedAntiAddictMaskViewControllerWrapperDelegate, AWEAntiAddictMaskViewControllerProtocol;

@interface AWELiveFeedAntiAddictMaskViewControllerWrapper : NSObject <IESLiveFeedAntiAddictMaskViewControllerWrapper>

@property (retain, nonatomic) UIViewController<AWEAntiAddictMaskViewControllerProtocol> *targetViewController;
@property (weak, nonatomic) id<IESLiveFeedAntiAddictMaskViewControllerWrapperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didDisplay;
- (void)didTrackStayTimeWithParams:(id)a0;
- (void)didTrackClickWithParams:(id)a0;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)play;
- (id)init;
- (void)reset;
- (void)didEndDisplaying;
- (void)setupContext;
- (void)willDisplay;

@end
