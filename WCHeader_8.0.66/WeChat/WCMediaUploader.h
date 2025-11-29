@class NSString, WCUploadTask, WCUploadMedia, CdnSnsTaskInfo;
@protocol WCMediaUploaderDelegate;

@interface WCMediaUploader : WCUploader <ICdnComMgrExt> {
    int currentPos;
    long long uploadResult;
    long long uploadErrType;
    int cdnErrCode;
    CdnSnsTaskInfo *m_oCdnSnsTaskInfo;
    NSString *m_clientMediaID;
    BOOL m_useC2C;
    BOOL m_useWebp;
    BOOL m_useVCodec;
    BOOL m_useWxpc;
    unsigned int sightEventID;
}

@property (retain, nonatomic) WCUploadTask *m_uploadTask;
@property (retain, nonatomic, setter=setMedia:) WCUploadMedia *m_media;
@property (retain, nonatomic) NSString *m_appID;
@property (nonatomic) int m_objectType;
@property (weak, nonatomic) id<WCMediaUploaderDelegate> m_delegate;
@property (nonatomic) BOOL shouldOptimizeThumb;
@property (nonatomic) BOOL isCommentImage;

- (id)init;
- (void)dealloc;
- (BOOL)startRequest;
- (BOOL)canInterrupt;
- (void)cancelWithBlock:(id /* block */)a0;
- (id)generateCustomRequestHeaders;
- (BOOL)isOverRoladRetCode:(int)a0;
- (void)OnCdnUpload:(id)a0;
- (void)tryReportErrRetCode:(int)a0 type:(int)a1;
- (void)OnCdnUploadProgress:(id)a0;
- (void)tryNextRequest;
- (void)setFinished;
- (BOOL)onSetRequest:(id)a0;
- (void)onRequest:(id)a0 Event:(unsigned int)a1;
- (void)onResponse:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
