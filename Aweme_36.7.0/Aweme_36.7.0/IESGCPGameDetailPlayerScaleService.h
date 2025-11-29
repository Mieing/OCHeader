@class NSString, UIViewController;

@interface IESGCPGameDetailPlayerScaleService : NSObject <IESGCPAudienceDetailActions, IESGCPDIContextSubscriber>

@property (weak, nonatomic) UIViewController *container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetGameCPDIContext;
- (void)didOpenGameDetailView;
- (void)willCloseGameDetailView:(BOOL)a0;
- (BOOL)canPlayerScale;
- (void).cxx_destruct;
- (id)initWithContainer:(id)a0;

@end
