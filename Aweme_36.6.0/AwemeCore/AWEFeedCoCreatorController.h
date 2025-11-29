@class NSString;
@protocol AWEFeedTrackControllerProtocol;

@interface AWEFeedCoCreatorController : AWEBaseController <AWEFeedControllerProtocol, AWEFeedTrackControllerListenerProtocol>

@property (weak, nonatomic) id<AWEFeedTrackControllerProtocol> feedTrackController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
