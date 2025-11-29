@class NSPointerArray, NSArray, NSString;

@interface IESLiveCloseGuideCoordinatorFragment : IESLiveRoomComponent <IESLiveCloseGuideCoordinatorService>

@property (retain, nonatomic) NSPointerArray *highPriorityProviders;
@property (retain, nonatomic) NSPointerArray *normalPriorityProviders;
@property (retain, nonatomic) NSPointerArray *lowPriorityProviders;
@property (retain, nonatomic) NSArray *providersPriorityQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (BOOL)couldUnmountComponent;
- (void)registerCloseGuideProvider:(id)a0;
- (BOOL)p_triggerCloseGuideNotOnlyOnce:(id)a0;
- (BOOL)p_existCloseGuideProviders;
- (BOOL)p_triggerCloseGuideOfProviders:(id)a0;
- (BOOL)p_containCloseGuideProvider:(id)a0;
- (void).cxx_destruct;

@end
