@class NSString, NSArray, UIView;
@protocol IESLiveRoomService, IESHYContainerProtocol;

@interface IESLiveRevenueDynamicCounter : NSObject <IESHYHybridViewLifecycleProtocol, IESLiveIDLNativeHostService>

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *container;
@property (weak, nonatomic) id<IESLiveRoomService> room;
@property (copy, nonatomic) NSString *serviceVersion;
@property (retain, nonatomic) NSArray *dynamicServices;
@property (nonatomic) BOOL isReuseServiceCenter;
@property (nonatomic) BOOL isLazyLoadRedpacketService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)arrayToJSONString:(id)a0;

- (void)didSetAttachingDIContext;
- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidRecieveError:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)updateServiceCenterState:(id)a0;
- (BOOL)compareContainerVersion:(id)a0 targeVersion:(id)a1;
- (void)destroyDynamicCounterView;
- (id)initWithRoom:(id)a0 needReuse:(BOOL)a1;
- (id)getRoomIdentity;
- (void)needDestroyDynamicCounterView;
- (void).cxx_destruct;

@end
