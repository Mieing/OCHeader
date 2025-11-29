@class OpenBufferUploadMgr, NSString, NSData, CMessageWrap;

@interface AppMsgSendProcessor : UploadStateProcessor <IBufferUploadExt>

@property (retain, nonatomic) CMessageWrap *msgWrap;
@property (retain, nonatomic) NSString *appMsgContent;
@property (retain, nonatomic) NSData *appMsgContentData;
@property (retain, nonatomic) OpenBufferUploadMgr *openBufferUploadMgr;
@property (nonatomic) unsigned int sendRetryCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (void)start;
- (void)stop;
- (id)getStateName;
- (void)startUploadMsgXmlData;
- (id)getSendAppMsgRequest;
- (void)sendCurAppMsg;
- (void)SendMsgOK:(id)a0;
- (void)OnBufferUploadFail:(id)a0 ClientAppDataId:(id)a1;
- (void)OnBufferUploadOK:(id)a0 ClientAppDataId:(id)a1 MediaId:(id)a2;
- (void).cxx_destruct;

@end
