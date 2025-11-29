@class NSString, MMUIViewController;

@interface BizIamServiceSwiftHelper : MMUserService <IStrangerContactMgrExt, MMServiceProtocol>

@property (weak, nonatomic) MMUIViewController *hostController;
@property (nonatomic) BOOL isFromWeApp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getNavigatonControllerFromWeAppHostController:(id)a0;

- (void)getProfileOutboxAppMsgIds:(id /* block */)a0;
- (void)setProfileOutboxAppMsgIds:(id)a0;
- (void)notifyProfileUpdated:(id)a0;
- (void)openProfileFromWeAppWithUsername:(id)a0 hostController:(id)a1;
- (void)openProfileWithUsername:(id)a0 hostController:(id)a1;
- (void)openProfileWithContact:(id)a0 navigationController:(id)a1 animated:(BOOL)a2;
- (void)getProfileCacheDataWithUsername:(id)a0 tabType:(int)a1 inBrandManagerMode:(BOOL)a2 completion:(id /* block */)a3;
- (void)fetchProfileDataWithUsername:(id)a0 tabType:(int)a1 inBrandManagerMode:(BOOL)a2 offset:(id)a3 completion:(id /* block */)a4;
- (void)cleanPageDataForUrl:(id)a0;
- (void)onStrangerContactUpdated:(id)a0 Contact:(id)a1;
- (void).cxx_destruct;

@end
