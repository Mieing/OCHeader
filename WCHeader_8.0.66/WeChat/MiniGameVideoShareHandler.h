@class NSURLSession, NSString, ForwardMessageLogicController, NSMutableData, MiniGameVideoFile;

@interface MiniGameVideoShareHandler : NSObject <ICdnComMgrExt, ForwardMessageLogicDelegate, NSURLSessionDataDelegate, WCCommitViewResultDelegate> {
    ForwardMessageLogicController *m_forwardMsgLogic;
}

@property (copy, nonatomic) NSString *fileKey;
@property (copy, nonatomic) NSString *thumbPath;
@property (retain, nonatomic) MiniGameVideoFile *videoFile;
@property (nonatomic) unsigned long long shareType;
@property (nonatomic) float lastPercent;
@property (nonatomic) BOOL isCancel;
@property (retain, nonatomic) NSURLSession *urlSession;
@property (retain, nonatomic) NSMutableData *m_recData;
@property (copy, nonatomic) NSString *shareUrl;
@property (copy, nonatomic) NSString *shareThumbUrl;
@property (copy, nonatomic) id /* block */ onShareCallback;
@property (copy, nonatomic) id /* block */ cancelCallback;
@property (copy, nonatomic) id /* block */ finishCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithVideoFile:(id)a0 shareType:(unsigned long long)a1;
- (void)setOnShareBlock:(id /* block */)a0 cancelBlock:(id /* block */)a1 finishBlock:(id /* block */)a2;
- (id)createThumbPic;
- (void)share;
- (void)startUploadVideoWithThumbPath:(id)a0;
- (void)shareWithShareUrl:(id)a0 thumbUrl:(id)a1;
- (void)shareToFriendWithShareUrl:(id)a0 thumbUrl:(id)a1 imageData:(id)a2;
- (void)shareToTimelineWithShareUrl:(id)a0 thumbUrl:(id)a1 imageData:(id)a2;
- (id)getHttpsThumbUrl:(id)a0;
- (void)doShareRequest:(id)a0 thumbUrl:(id)a1;
- (void)onCancelForwardForForwardView:(id)a0;
- (void)onDoneForwardForForwardView:(id)a0;
- (void)OnCdnUploadProgress:(id)a0;
- (void)OnCdnUpload:(id)a0;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void)OnForwardMessageConfirmCanceled:(id)a0;
- (void)OnForwardMessageException:(id)a0;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveResponse:(id)a2 completionHandler:(id /* block */)a3;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)clearCurData;
- (void)cancelShare;
- (void)dealloc;
- (void).cxx_destruct;

@end
