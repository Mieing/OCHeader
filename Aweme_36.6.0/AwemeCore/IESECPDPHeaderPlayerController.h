@class NSString;

@interface IESECPDPHeaderPlayerController : NSObject <IESECPDPViewControllerLifeCycleReceiverProtocol>

@property (nonatomic) BOOL didPageRender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
