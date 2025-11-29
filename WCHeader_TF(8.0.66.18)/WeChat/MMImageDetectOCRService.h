@class NSString, MMImageDetectUploader, NSMutableSet;

@interface MMImageDetectOCRService : MMUserService <PBMessageObserverDelegate, MMImageDetectUploaderDelegate, MMServiceProtocol>

@property (retain, nonatomic) MMImageDetectUploader *uploader;
@property (retain, nonatomic) NSMutableSet *cancelSessionIDSet;
@property (nonatomic) BOOL enableLocalOCR;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)startImageUploadAndDetect:(id)a0;
- (void)cancelImageUploadAndDetect:(unsigned long long)a0;
- (void)onImageDetectUploadFinish:(unsigned int)a0 context:(id)a1 detectMediaInfo:(id)a2;
- (void)startImageDetectOCR:(id)a0 detectMediaInfo:(id)a1;
- (void)handleImageDetectOCR:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)notifyUploadFinish:(unsigned int)a0 context:(id)a1 detectMediaInfo:(id)a2;
- (void)notifyOCRFinish:(id)a0 resultType:(unsigned int)a1 jsonStr:(id)a2 reqKey:(id)a3;
- (void)notifyOCRFinish:(id)a0 resultType:(unsigned int)a1 jsonStr:(id)a2 reqKey:(id)a3 ocrResultType:(long long)a4;
- (BOOL)openLocalOCRTest;
- (BOOL)enableImageLocalOCR:(int)a0;
- (BOOL)checkLocalImageOCR:(id)a0 errCode:(int)a1;
- (void)doLocalImageOCR:(id)a0 imagePath:(id)a1;
- (id)genLocalOCRReqKey;
- (id)buildLocalOCRResultJson:(id)a0 reqKey:(id)a1;
- (void).cxx_destruct;

@end
