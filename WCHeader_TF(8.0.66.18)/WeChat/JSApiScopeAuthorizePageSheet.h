@class NSString, JSApiScopeAuthViewModel, JSApiScopeAuthorizeInfo;

@interface JSApiScopeAuthorizePageSheet : WAAuthorizePageSheet <MMAuthorizeAddAvatarViewControllerDelegate>

@property (nonatomic) unsigned int selectedAvatarId;
@property (nonatomic) unsigned int sessionId;
@property (retain, nonatomic) JSApiScopeAuthViewModel *asaViewModel;
@property (retain, nonatomic) JSApiScopeAuthorizeInfo *info;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInfo:(id)a0;
- (void)deleteOneAvatarInfo:(id)a0;
- (void)onCgiResponse:(id)a0 forEvent:(unsigned int)a1;
- (void)handleDelAvatarResp:(id)a0;
- (void)tryAddAvatar;
- (void)markAvartarIdSelected:(unsigned int)a0;
- (void)scrollToCurrentIndex;
- (void)onAddAvatarSuccess:(id)a0;
- (id)customSubviewClassList;
- (id)subViewModel;
- (void).cxx_destruct;

@end
