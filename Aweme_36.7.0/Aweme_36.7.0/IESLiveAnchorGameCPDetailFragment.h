@class IESLiveGameCPBridgeProvider, NSString;

@interface IESLiveAnchorGameCPDetailFragment : IESLiveRoomComponent <IESLiveGameCPAnchorPromotionInterface>

@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) IESLiveGameCPBridgeProvider *bridgeProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentMount;
- (void)componentUnmount;
- (void)getAnchorPromotionGameIDsWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
