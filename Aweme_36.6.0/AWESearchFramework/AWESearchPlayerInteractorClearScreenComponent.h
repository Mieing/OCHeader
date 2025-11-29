@class AWESearchEventDispather, NSString, NSDictionary, AWESearchPlayerInteractorClearScreenView;
@protocol AWESearchContainerProtocol, AWESearchComponentProtocol;

@interface AWESearchPlayerInteractorClearScreenComponent : AWESearchComponent <AWESearchPlayerInteractorClearScreenComponentProvider>

@property (retain, nonatomic) AWESearchPlayerInteractorClearScreenView *contentView;
@property (retain, nonatomic) AWESearchEventDispather *eventDispather;
@property (weak, nonatomic) id<AWESearchContainerProtocol> containerContext;
@property (weak, nonatomic) id<AWESearchComponentProtocol> componentContext;
@property (copy, nonatomic) NSDictionary *dictLogExtraInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) BOOL hidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)provideProtocol;
- (void).cxx_destruct;
- (id)componentView;

@end
