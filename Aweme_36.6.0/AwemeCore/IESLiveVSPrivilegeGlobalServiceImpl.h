@class NSString;

@interface IESLiveVSPrivilegeGlobalServiceImpl : NSObject <IESLiveVSPrivilegeGlobalService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openVSPrivilegePlayerViewControllerWithTitle:(id)a0 privilegeDescriptionInfo:(id)a1 isAlbumType:(BOOL)a2 albumHybridViewURLString:(id)a3 videoModels:(id)a4 startPlayVideoIndex:(long long)a5 needStartFromHistory:(BOOL)a6 needForbidRecord:(BOOL)a7 trackParameters:(id)a8 playingIndexWhenDismiss:(id /* block */)a9;

@end
