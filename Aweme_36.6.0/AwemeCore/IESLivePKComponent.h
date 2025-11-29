@class NSString, UIView;
@protocol IESLiveRevenueInteractPlayModel, IESLivePKProvider, IESLivePKModel, IESLiveRoomService;

@interface IESLivePKComponent : NSObject <IESLivePKComponent>

@property (retain, nonatomic) id<IESLivePKModel> pkmodel;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) id<IESLiveRevenueInteractPlayModel> playModel;
@property (retain, nonatomic) UIView *contentView;
@property (weak, nonatomic) id<IESLivePKProvider> pkProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)componentDidLoad;
- (void)componentPlaying;
- (void)componentPunishing;
- (void)componentFinished;
- (void)componentBusinessPrepare;
- (void)componentInteracting;
- (void).cxx_destruct;

@end
