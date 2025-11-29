@class NSArray, NSString, NSData, NSMutableArray, NSInputStream;

@interface QBPostDataFormElement : NSObject <QBPostDataProtocol> {
    NSString *_postBoundaryString;
    NSMutableArray *_elementArray;
    unsigned long long _streamRead;
    unsigned long long _suffixRead;
    unsigned long long _fileRead;
    NSMutableArray *_streamFiles;
    NSData *_streamData;
    BOOL _dataSorted;
    NSInputStream *_fileInput;
    unsigned long long _currentFileIndex;
    unsigned char _buffer[32768];
}

@property (readonly, copy) NSArray *elements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) int dataPostType;
@property BOOL dataReady;
@property long long randomString;
@property (readonly) unsigned long long fileSize;
@property (readonly) NSString *filePath;

- (id)initWithElements:(id)a0;
- (void)addElement:(id)a0;
- (id)contentBoundaryString;
- (id)contentData;
- (void)fillDataFromAnotherInstance:(id)a0;
- (void)resetElements:(id)a0;
- (id)archiveMultipartFormData;
- (id)archiveURLEncodedData;
- (id)finalPostData;
- (BOOL)shouldUseStreamToSendData;
- (id)streamFiles;
- (void)sortContentElement;
- (id)createInputStreamForPost;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (void)URLEncodedDataStream:(id)a0 handleEvent:(unsigned long long)a1;
- (void)multipartFormDataStream:(id)a0 handleEvent:(unsigned long long)a1;
- (void)getStreamData;
- (BOOL)readFilesStreamFinished:(id)a0;
- (unsigned long long)contentBoundayStringLength;
- (unsigned long long)contentInfoStringLength:(id)a0;
- (unsigned long long)dataSize;
- (void).cxx_destruct;

@end
