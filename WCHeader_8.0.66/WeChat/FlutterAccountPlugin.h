@class NSString, NSMutableDictionary, NSMutableArray;

@interface FlutterAccountPlugin : NSObject <IHeadImageExt, MessageObserverDelegate, MMFlutterPlugin, FlutterAccountHost>

@property (readonly, nonatomic) NSMutableDictionary *m_map;
@property (readonly, nonatomic) NSMutableDictionary *m_user_name_map;
@property (retain, nonatomic) NSMutableDictionary *headImgDownloadMap;
@property (readonly, nonatomic) NSMutableDictionary *m_loadInfoMap;
@property (retain, nonatomic) NSMutableArray *m_contacts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (id)isLoginWithError:(id *)a0;
- (id)getUinWithError:(id *)a0;
- (void)getAvatarInfoUsername:(id)a0 hd:(BOOL)a1 completion:(id /* block */)a2;
- (void)removeForwardUserInfo:(id)a0 error:(id *)a1;
- (void)getRecentForwardUserInfoMaxCount:(long long)a0 ignoreChatRoom:(BOOL)a1 completion:(id /* block */)a2;
- (id)getDisplayNameUsername:(id)a0 error:(id *)a1;
- (id)getSelfUsernameWithError:(id *)a0;
- (void)getUserInfoUsername:(id)a0 hd:(BOOL)a1 completion:(id /* block */)a2;
- (void)MessageReturn:(unsigned int)a0 MessageInfo:(id)a1 Event:(unsigned int)a2;
- (void)onHeadImageChange:(id)a0;
- (id)isTeenModeWithError:(id *)a0;
- (id)isOverseaUserWithError:(id *)a0;
- (void)p_report31836ContextAction:(unsigned int)a0;
- (void).cxx_destruct;

@end
