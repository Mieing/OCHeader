@class CMessageWrap, OpenUploadVideoCDNMgr, OpenUploadCDNMgr, RecordUploadCDNMgr, NSString, MultiMediaUploadUnifyMgr, VideoUploadUnifyMgr, ImageUploadUnifyBaseMgr;
@protocol HistoryMsgUploadTaskDelegate;

@interface HistoryMsgUploadTask : NSObject <UploadImageCDNMgrDelegate, UploadVideoCDNMgrDelegate, RecordUploadCDNMgrDelegate, OpenUploadCDNMgrDelegate>

@property (retain, nonatomic) CMessageWrap *msgWrap;
@property (weak, nonatomic) id<HistoryMsgUploadTaskDelegate> delegate;
@property (retain, nonatomic) ImageUploadUnifyBaseMgr *uploadImageCdnMgr;
@property (retain, nonatomic) VideoUploadUnifyMgr *uploadVideoCdnMgr;
@property (retain, nonatomic) RecordUploadCDNMgr *recordUploadCDNMgr;
@property (retain, nonatomic) MultiMediaUploadUnifyMgr *multiMediaUploadUnifyMgr;
@property (retain, nonatomic) OpenUploadCDNMgr *openUploadCDNMgr;
@property (retain, nonatomic) OpenUploadVideoCDNMgr *openUploadVideoCDNMgr;
@property (nonatomic) BOOL uploadNoteMediaOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0 MsgWrap:(id)a1;
- (id)genOpenUploadQueuePath;
- (id)genImageMsgWrap:(id)a0;
- (void)startUpload;
- (void)stopUpload;
- (void)OnUploadMsgDataSuccess:(id)a0;
- (void)OnUploadRecordMsgDataSuccess:(id)a0;
- (void)OnUploadMsgDataFail:(id)a0;
- (void).cxx_destruct;

@end
