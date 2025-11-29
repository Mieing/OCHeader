@class NSString;

@interface AWEIMMessageConversationMixPhotoComponent : AWEIMComponentBase <AWEIMMessageConversationMixPhotoInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (id)isInitiateDataReady;

@end
