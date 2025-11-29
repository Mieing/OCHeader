@class WAAppBrandNotifyInfo;

@interface WAAppTrialInfoLoader : MMObject {
    id /* block */ m_completeBlock;
    BOOL m_isRequesting;
    WAAppBrandNotifyInfo *m_requestingNotifyInfo;
}

@property (nonatomic) unsigned int appServiceType;

- (void)loadTrialInfoWithPack:(id)a0 completion:(id /* block */)a1;
- (BOOL)isRequesting;
- (id)requestingNotifyInfo;
- (void)requestTrialInfoWithPack:(id)a0;
- (void)onCgiResponse:(id)a0 forEvent:(unsigned int)a1;
- (void)handleCheckTrialInfoResponse:(id)a0;
- (void)sendRequest:(id)a0 Retry:(unsigned int)a1;
- (void)finishWithRespAndInvokeCompleteBlock:(unsigned int)a0 userInfo:(id)a1;
- (void)updateNotifyInfoWithDownloadUrl:(id)a0 md5Str:(id)a1 extInfo:(id)a2 oldNotify:(id)a3;
- (void).cxx_destruct;

@end
