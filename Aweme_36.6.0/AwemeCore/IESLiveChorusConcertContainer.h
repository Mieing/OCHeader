@class NSString, UIView;
@protocol IESHYContainerProtocol;

@interface IESLiveChorusConcertContainer : NSObject <IESHYHybridViewLifecycleProtocol, IESLiveChorusConcertEventDelegate>

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *lynxView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)invokeEvent:(id)a0 params:(id)a1;
- (void)removeContainer;
- (void)loadContainers;
- (id)initWithLynxFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
