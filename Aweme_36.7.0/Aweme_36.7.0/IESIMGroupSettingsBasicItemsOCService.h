@class NSString;

@interface IESIMGroupSettingsBasicItemsOCService : HTSService <IESIMGroupSettingsBasicItemsOCServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)leaveGroupWithCon:(id)a0 completion:(id /* block */)a1;
- (void)leaveAndDissolveGroupWithCon:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)leaveAndDissolveGroupWithCon:(id)a0 historyInvisible:(id)a1 completion:(id /* block */)a2;
- (void)showChatAlbumWithContext:(id)a0;
- (void)showShareContentWithContext:(id)a0;
- (void)p_showHistoryMediaViewControllerWithContext:(id)a0 type:(unsigned long long)a1 title:(id)a2;

@end
