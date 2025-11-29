@class NSString;

@interface MMConfSDKCGIImp : NSObject <PBMessageObserverDelegate> {
    NSString *_currentRequestAppId;
    id /* block */ _currentGetAuthCodeCGICallback;
    id /* block */ _currentGetSDKUserInfoCGICallback;
    id /* block */ _currentSendBannerMsgCGICallback;
    id /* block */ _currentScreenSharingSecurityCheckCGICallback;
}

- (void)cgiGetAuthCode:(unsigned int)a0 callback:(id /* block */)a1;
- (void)cgiGetSDKUserInfo:(unsigned int)a0 sdkUserList:(id)a1 groupId:(id)a2 callback:(id /* block */)a3;
- (void)cgiSendBannerMsg:(unsigned int)a0 groupid:(id)a1 roomId:(long long)a2 fromUserName:(id)a3 fromSdkUserName:(id)a4 bannerMsg:(id)a5 callback:(id /* block */)a6;
- (void)cgiReportLog:(id)a0 sdkGroupId:(id)a1 fromUserName:(id)a2 fromSdkUserName:(id)a3 reportList:(id)a4;
- (void)cgiScreenSharingSecurityCheck:(unsigned int)a0 groupid:(id)a1 sdkGroupId:(id)a2 fromUserName:(id)a3 fromSdkUserName:(id)a4 roomId:(long long)a5 sharingFileMd5:(id)a6 callback:(id /* block */)a7;
- (void)sendRequest:(id)a0 Retry:(int)a1;
- (void)sendRequestWithoutPBW:(id)a0 Retry:(int)a1;
- (void)cgiSendCloudIlinkRequest:(unsigned int)a0 request:(id)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
