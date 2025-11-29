@class NSString;

@interface AWEUserListGeneralCellService : HTSService <AWEUserListGeneralCellService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)userListGeneralCellConfigWithUserModel:(id)a0 businessModel:(id)a1;
- (Class)userListPanelCellClass;

@end
