@interface PLzmaSDKInStream : NSObject {
    struct SharedPtr<plzma::InStream> { struct InStream *_ptr; } _inStream;
}

@property (readonly, nonatomic) const void *inStreamSPtr;
@property (readonly, nonatomic) BOOL opened;

- (BOOL)erase:(unsigned char)a0;
- (id)initWithPath:(id)a0;
- (id)initWithDataCopy:(id)a0;
- (id)initWithDataNoCopy:(id)a0;
- (id)initWithStreams:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
