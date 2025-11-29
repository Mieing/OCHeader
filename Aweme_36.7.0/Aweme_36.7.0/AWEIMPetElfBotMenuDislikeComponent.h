@class NSString;

@interface AWEIMPetElfBotMenuDislikeComponent : AWEIMComponentBase <AWEIMMessageListMenuProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (BOOL)canShowItemWithMessage:(id)a0 context:(id)a1;
- (id)menuItemTitle:(id)a0 context:(id)a1;
- (id)menuItemImageName:(id)a0 context:(id)a1;
- (id)menuItemLightImageURL:(id)a0 context:(id)a1;
- (id)menuItemDarkImageURL:(id)a0 context:(id)a1;
- (id)menuTrackerName:(id)a0 context:(id)a1;
- (unsigned long long)menuItemType;
- (void)didClickItemWithMessage:(id)a0 context:(id)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })menuItemIconTransform;

@end
