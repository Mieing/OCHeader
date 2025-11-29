@class NSDictionary, BDPUniqueID, NSString;

@interface BDPBusinessRevisitGuideController : BDPHostPanelContentBusinessController <BDPRevisitGuideInfoProtocol>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) unsigned long long currentActionType;
@property (copy, nonatomic) NSDictionary *commonTrackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
