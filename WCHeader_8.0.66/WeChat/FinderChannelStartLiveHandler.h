@class NSString;

@interface FinderChannelStartLiveHandler : OpenFinderBaseHandler

@property (copy, nonatomic) NSString *liveJsonInfo;
@property (copy, nonatomic) NSString *openId;

- (void)createOpenUrl;
- (void)onAuthDidSuccess;
- (void)onAuthDidFail;
- (void)onAuthDidCancel;
- (void)sendStartChannelLiveResp:(id)a0;
- (void)showFailErrorMsg:(id)a0 title:(id)a1 respErrMsg:(id)a2 respErrCode:(int)a3;
- (void).cxx_destruct;

@end
