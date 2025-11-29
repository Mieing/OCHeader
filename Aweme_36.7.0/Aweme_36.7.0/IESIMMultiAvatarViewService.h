@class NSString;

@interface IESIMMultiAvatarViewService : HTSService <IESIMMultiAvatarViewService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createMultiAvatarView;
- (id)createMultiAvatarViewOptions;

@end
