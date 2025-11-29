@class NSString, UIView;
@protocol IESLiveRoomService, IESHYContainerProtocol;

@interface IESLivePayWallGuidePayView : UIView <IESHYHybridViewLifecycleProtocol, HTSLivePluginLayoutView>

@property (nonatomic) BOOL didLoad;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *fallbackUrk;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidRecieveError:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })pluginLayoutContentInsets;
- (void)renderWithUrl:(id)a0 fallbackUrl:(id)a1;
- (void)notityLeftTime:(double)a0;
- (void).cxx_destruct;
- (id)viewType;

@end
