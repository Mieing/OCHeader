@class IESLiveAioLinkHybridComponentConfig, IESLiveCombineSubject, NSString;
@protocol IESHYControllerDelegate;

@interface IESLiveAioLinkRouterHYControllerDelegateHandler : NSObject <IESHYControllerDelegate>

@property (retain, nonatomic) IESLiveCombineSubject *subject;
@property (retain, nonatomic) IESLiveAioLinkHybridComponentConfig *config;
@property (weak, nonatomic) id<IESHYControllerDelegate> aiolinkDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)iesHYController:(id)a0 didFinishLoadWithError:(id)a1;
- (void)iesHYController:(id)a0 didCreatedHYView:(id)a1;
- (void)iesHYControllerDidStartLoad:(id)a0;
- (void)iesHYControllerDidFinishLoad:(id)a0;
- (void)iesHYControllerWillDismiss:(id)a0;
- (void)iesHYControllerDidDismiss:(id)a0;
- (void).cxx_destruct;

@end
