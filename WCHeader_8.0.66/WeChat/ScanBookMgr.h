@class NSString, NSData, MMTimer;

@interface ScanBookMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate> {
    unsigned int _scanBookId;
    unsigned int _sessionId;
    unsigned int _opCode;
    NSData *_dataToSend;
    unsigned int _totalLen;
    unsigned int _offset;
    unsigned int _lastPackLen;
    int _imageType;
    int _uploadAction;
    BOOL _isUploading;
    MMTimer *_uploadTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)getProductItemById:(id)a0 Scence:(unsigned int)a1 QRCodeUrl:(id)a2;
- (void)start;
- (void)stop;
- (void)checkUpload;
- (id)getLocalProductItemById:(id)a0;
- (void)saveProductItem:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
