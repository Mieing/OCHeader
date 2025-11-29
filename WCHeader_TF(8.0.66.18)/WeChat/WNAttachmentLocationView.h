@class NSString;

@interface WNAttachmentLocationView : WNAttachmentBaseView <ViewLocationDelegate, FavForwardLogicDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutView;
- (id)getTitle;
- (id)getDescription;
- (id)getImage;
- (void)onClickObject;
- (void)onSendLocationToFriendWithViewController:(id)a0;
- (id)getFavForawrdViewController;

@end
