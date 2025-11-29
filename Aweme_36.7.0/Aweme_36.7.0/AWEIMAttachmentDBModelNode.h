@class NSString;
@protocol IESIMFlowNodeProtocol;

@interface AWEIMAttachmentDBModelNode : NSObject <IESIMFlowNodeProtocol>

@property (retain, nonatomic) id<IESIMFlowNodeProtocol> next;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)outputClass;
- (void)p_initDBModelWithAttachment:(id)a0 index:(long long)a1 dbModelArray:(id)a2 completion:(id /* block */)a3;
- (void)p_storeThumbnailIfNeedWithAttachmentObject:(id)a0 dbModel:(id)a1 sendObj:(id)a2;
- (BOOL)p_isSupportGenerateThumbnailWithFileType:(int)a0;
- (void)p_insertThumbnailDBModel:(id)a0 needWriteData:(id)a1 absoluteFilePath:(id)a2;
- (BOOL)p_writeDataToDiskWithMessageId:(id)a0 data:(id)a1 absoluteFilePath:(id)a2;
- (Class)inputClass;
- (void)runWithInput:(id)a0 progressBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)identifier;

@end
