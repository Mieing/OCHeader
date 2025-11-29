@class NSString;
@protocol IESLiveInteractSeatElementActions;

@interface IESLiveInteractSeatElementMultiCaster : IESLiveInteractComponentMultiCaster <IESLiveInteractSeatElementProvider, IESLiveInteractSeatElementEvents>

@property (retain, nonatomic) id<IESLiveInteractSeatElementActions> outerActions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void).cxx_destruct;

@end
