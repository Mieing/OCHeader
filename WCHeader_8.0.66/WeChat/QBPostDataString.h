@class NSString, NSData;

@interface QBPostDataString : NSObject <QBPostDataProtocol> {
    int _dataPostType;
    NSString *_contentBoundaryString;
    NSString *_contentInfoString;
    unsigned long long _streamRead;
    NSData *_streamData;
}

@property (readonly) NSString *dataString;
@property (readonly) NSString *name;
@property (readonly) NSString *encodeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) int dataPostType;
@property BOOL dataReady;
@property long long randomString;
@property (readonly) unsigned long long fileSize;
@property (readonly) NSString *filePath;

- (id)initWithDataString:(id)a0 name:(id)a1 encodeType:(id)a2;
- (void)setDataString:(id)a0 name:(id)a1 encodeType:(id)a2;
- (id)contentData;
- (id)contentBoundaryString;
- (id)contentInfoString;
- (id)finalPostData;
- (void)fillDataFromAnotherInstance:(id)a0;
- (BOOL)shouldUseStreamToSendData;
- (unsigned long long)dataSize;
- (id)createInputStreamForPost;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (void).cxx_destruct;

@end
