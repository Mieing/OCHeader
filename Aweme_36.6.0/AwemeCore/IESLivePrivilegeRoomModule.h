@class NSString;

@interface IESLivePrivilegeRoomModule : IESLiveModule <IESLivePrivilegeRoomModule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)invisibleInterface;
- (id)privilegeDanmakuInterface;
- (id)privilegeDressPreviewInterface;
- (id)privilegeEntranceInterface;
- (id)privilegeBuyDressInterface;
- (BOOL)isUserEntryView:(id)a0;

@end
