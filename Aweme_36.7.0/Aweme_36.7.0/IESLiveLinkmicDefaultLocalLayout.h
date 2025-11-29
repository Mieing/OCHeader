@class NSString, IESLiveInteractSession, UIView;

@interface IESLiveLinkmicDefaultLocalLayout : NSObject <IESLiveInteractiveLocalLayout>

@property (retain, nonatomic) IESLiveInteractSession *hostSession;
@property (retain, nonatomic) UIView *sessionViewContainer;
@property (retain, nonatomic) UIView *optionViewContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
