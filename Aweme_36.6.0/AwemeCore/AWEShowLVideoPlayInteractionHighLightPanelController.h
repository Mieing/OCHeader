@class NSString;

@interface AWEShowLVideoPlayInteractionHighLightPanelController : AWEPlayInteractionBaseController <AWEPlayInteractionPanelControllerProtocol>

@property (nonatomic) BOOL showed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPanelShowed;
- (id)init;

@end
