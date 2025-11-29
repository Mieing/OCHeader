@class NSString, NSInputStream;

@interface QBPostDataFile : NSObject <QBPostDataProtocol> {
    NSString *_contentBoundaryString;
    NSString *_contentInfoString;
    unsigned long long _streamRead;
    NSInputStream *_fileInput;
    unsigned long long _totalLength;
    unsigned char _buffer[32768];
}

@property (readonly) NSString *name;
@property (readonly) NSString *fileName;
@property (readonly) NSString *fileType;
@property (readonly) unsigned long long fileSize;
@property (readonly) NSString *filePath;
@property (readonly) double lastModified;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) int dataPostType;
@property BOOL dataReady;
@property long long randomString;

- (id)initWithString:(id)a0;
- (id)initWithName:(id)a0 fileName:(id)a1 fileType:(id)a2 fileSize:(unsigned long long)a3 lastModifiedDate:(double)a4;
- (void)setName:(id)a0 fileName:(id)a1 fileType:(id)a2 fileSize:(unsigned long long)a3 lastModifiedDate:(double)a4;
- (id)contentBoundaryString;
- (id)contentInfoString;
- (id)contentPath;
- (id)contentData;
- (id)finalPostData;
- (unsigned long long)contentBoundayStringLength;
- (unsigned long long)contentInfoStringLength;
- (unsigned long long)totalLength;
- (void)fillDataFromAnotherInstance:(id)a0;
- (BOOL)shouldUseStreamToSendData;
- (unsigned long long)dataSize;
- (id)createInputStreamForPost;
- (void).cxx_destruct;

@end
