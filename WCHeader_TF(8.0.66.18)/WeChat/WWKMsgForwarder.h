@class NSArray, HistoryMsgUploadMgr, NSString, NSMutableArray;
@protocol WWKMsgForwarderDelegate;

@interface WWKMsgForwarder : NSObject <HistoryMsgUploadMgrDelegate>

@property (retain, nonatomic) HistoryMsgUploadMgr *uploadMgr;
@property (retain, nonatomic) NSMutableArray *arrForwardWxworkMsg;
@property (retain, nonatomic) NSArray *arrForwardMsg;
@property (nonatomic) BOOL isSplitForward;
@property (nonatomic) long long appType;
@property (weak, nonatomic) id<WWKMsgForwarderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)shouldSendByBufferRecursiveForMsg:(id)a0;
- (BOOL)shouldSendByBufferForMsg:(id)a0;
- (BOOL)shouldSendByBufferForData:(id)a0 recursiveCheck:(BOOL)a1;
- (void)uploadMsgListToCdn:(id)a0;
- (void)onUploadDataFail:(id)a0;
- (void)onUploadMsgMediaFinished:(id)a0;
- (void)sendMsgListByBuffer:(id)a0;
- (id)getViewController;
- (void)sendSingleMsg:(id)a0;
- (void)sendSingleWeAppMsg:(id)a0 withImg:(id)a1;
- (id)convertMsgList2AttachmentList:(id)a0;
- (void)sendMultiMsg:(id)a0 split:(BOOL)a1;
- (void)sendAttachments:(id)a0 withEncryptData:(id)a1;
- (void)sendAttachment:(id)a0;
- (id)convertMsg2ForwardWxworkMsg:(id)a0 clientMsgId:(id)a1;
- (id)buildMsgAttchmentFromMsgWrap:(id)a0;
- (id)buildMusicAttachmentFromMsgWrap:(id)a0;
- (id)buildMsgTextAttachmentFromMsgWrap:(id)a0;
- (id)buildMsgAppTextAttachmentFromMsgWrap:(id)a0;
- (id)buildMsgFileAttachmentFromMsgWrap:(id)a0;
- (id)buildMsgImageAttachmentFromMsgWrap:(id)a0;
- (id)buildMsgLinkAttachmentFromMsgWrap:(id)a0;
- (id)buildMsgVideoAttachmentFromMsgWrap:(id)a0;
- (id)builddMsgWeAppAttachmentFromMsgWrap:(id)a0;
- (id)builddMsgOpenSDKWeAppAttachmentFromMsgWrap:(id)a0;
- (id)buildMsgLocationAttachmentFromMsgWrap:(id)a0;
- (id)getAppImgData:(id)a0;
- (id)buildMsgAttchmentFromRecordDataFieldAr:(id)a0 andRecordTitle:(id)a1;
- (id)buildMsgAttchmentFromRecordDataField:(id)a0;
- (id)buildMsgTextAttachmentFromNotSupportRecordDataField:(id)a0;
- (id)buildMsgTextAttachmentFromRecordDataField:(id)a0;
- (id)buildMsgFileAttachmentFromRecordDataField:(id)a0;
- (id)buildMsgImageAttachmentFromRecordDataField:(id)a0;
- (id)buildMsgLinkAttachmentFromRecordDataField:(id)a0;
- (id)buildMsgVideoAttachmentFromRecordDataField:(id)a0;
- (id)buildMsgLocationAttachmentFromRecordDataField:(id)a0;
- (id)MsgWeAppAttachmentFromRecordDataField:(id)a0;
- (void).cxx_destruct;

@end
