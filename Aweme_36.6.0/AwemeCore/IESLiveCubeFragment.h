@class NSString, NSMapTable, NSMutableArray;

@interface IESLiveCubeFragment : IESLiveRoomComponent <IESLiveCubeProvider>

@property (retain, nonatomic) NSMapTable *registrants;
@property (retain, nonatomic) NSMutableArray *controllers;
@property (retain, nonatomic) NSMutableArray *refreshControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentCreate;
- (void)componentMount;
- (void)componentRefresh;
- (id)objectWithProtocol:(id)a0;
- (void)cubeComponentCreate;
- (void)cubeComponentRefresh;
- (void)addRefreshController:(id)a0;
- (void).cxx_destruct;
- (void)addController:(id)a0;
- (void)useObject:(id)a0 forProtocol:(id)a1;

@end
