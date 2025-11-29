@class NSData, NSString;

@interface QBPostDataBinary : NSObject <QBPostDataProtocol> {
    int _type;
    NSString *_contentBoundaryString;
    NSString *_contentInfoString;
    unsigned long long _streamRead;
    NSData *_streamData;
}

@property (readonly) NSData *data;
@property (readonly) NSString *name;
@property (readonly) NSString *fileName;
@property (readonly) NSString *contentType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) int dataPostType;
@property BOOL dataReady;
@property long long randomString;
@property (readonly) unsigned long long fileSize;
@property (readonly) NSString *filePath;

- (id)initWithString:(id)a0;
- (id)initWithData:(id)a0 name:(id)a1 fileName:(id)a2 contentType:(id)a3;
- (void)setPostData:(id)a0 name:(id)a1 fileName:(id)a2 contentType:(id)a3;
- (id)contentBoundaryString;
- (id)contentInfoString;
- (id)contentData;
- (id)finalPostData;
- (void)fillDataFromAnotherInstance:(id)a0;
- (BOOL)shouldUseStreamToSendData;
- (unsigned long long)dataSize;
- (id)createInputStreamForPost;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (void).cxx_destruct;

@end
