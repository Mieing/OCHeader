@class NSString, UIView;
@protocol IESLiveRoomService, IESLiveRevenueInteractPlayModel, IESLiveRevenueInteractProvider;

@interface IESLiveRevenueInteractPlayComponent : NSObject <IESLivePKComponent, IESLiveRevenueInteractPlayComponent>

@property (weak, nonatomic) id<IESLiveRevenueInteractProvider> interactProvider;
@property (retain, nonatomic) id<IESLiveRevenueInteractPlayModel> playModel;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) UIView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void).cxx_destruct;

@end
