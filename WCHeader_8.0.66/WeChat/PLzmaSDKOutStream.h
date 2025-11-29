@class NSData;

@interface PLzmaSDKOutStream : NSObject {
    struct SharedPtr<plzma::OutStream> { struct OutStream *_ptr; } _outStream;
}

@property (readonly, nonatomic) const void *outStreamSPtr;
@property (readonly, nonatomic) BOOL isMulti;
@property (readonly, nonatomic) BOOL opened;
@property (readonly, nonatomic) NSData *copyContent;

- (BOOL)erase:(unsigned char)a0;
- (id)initWithOutStreamM:(void *)a0;
- (id)initWithOutStreamMTh:(void *)a0;
- (id)initWithPath:(id)a0;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
