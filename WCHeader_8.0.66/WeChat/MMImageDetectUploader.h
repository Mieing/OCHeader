@class NSMutableDictionary;
@protocol MMImageDetectUploaderDelegate;

@interface MMImageDetectUploader : NSObject <ICdnComMgrExt>

@property (retain, nonatomic) NSMutableDictionary *clientMsgID2ContextMap;
@property (retain, nonatomic) NSMutableDictionary *clientMsgID2DetectMediaInfoMap;
@property (weak, nonatomic) id<MMImageDetectUploaderDelegate> delegate;

- (id)init;
- (void)startUploadImage:(id)a0;
- (id)getValidImagePath:(id)a0;
- (void)removeAllContexts;
- (void)notifyUplodFinish:(unsigned int)a0 context:(id)a1 detectMediaInfo:(id)a2;
- (void)cdnMgrUploadContext:(id)a0 detectMediaInfo:(id)a1;
- (void)OnCdnUpload:(id)a0;
- (id)genCdnMediaInfoWithDetectMediaInfo:(id)a0;
- (void).cxx_destruct;

@end
