@class NSString, WANicknameAndHeadAuthorizeSheetInfo, WANickNameAndHeaderAuthViewModel, WAAuthorizeResultInfo;
@protocol IWAAuthorizeAddAvatarService, WAAuthorizePageDelegate;

@interface WANicknameAndHeadAuthorizePageSheet : WAAuthorizePageSheet <IWAAuthorizeAddAvatarServiceDelegate, IWANicknameAndHeadAuthorizePageSheet>

@property (retain, nonatomic) WANickNameAndHeaderAuthViewModel *nhaViewModel;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned int sessionId;
@property (retain, nonatomic) id<IWAAuthorizeAddAvatarService> authorizeAddAvatarProxyService;
@property (retain, nonatomic) WANicknameAndHeadAuthorizeSheetInfo *info;
@property (readonly, nonatomic) unsigned int selectedAvatarId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WAAuthorizePageDelegate> authDelegate;
@property (readonly, nonatomic) WAAuthorizeResultInfo *resultInfo;
@property (copy, nonatomic) id /* block */ acceptAction;
@property (copy, nonatomic) id /* block */ rejectAction;

+ (id)convertAvatarInfoListFromProto:(id)a0;

- (id)initWithInfo:(id)a0 appId:(id)a1;
- (void)tryAddAvatar;
- (void)editAvatar:(id)a0;
- (void)markAvartarIdSelected:(unsigned int)a0;
- (void)scrollToCurrentIndex;
- (void)deleteAvatar:(id)a0;
- (void)onCgiResponse:(id)a0 forEvent:(unsigned int)a1;
- (void)handleDelAvatarResp:(id)a0;
- (void)onIWAAuthorizeAddAvatarSuccess:(id)a0;
- (void)onIWAAuthorizeModAvatarSuccess:(id)a0;
- (id)customSubviewClassList;
- (id)subViewModel;
- (id)avatarInfo;
- (void).cxx_destruct;

@end
