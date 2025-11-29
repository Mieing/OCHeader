@class NSString;
@protocol PLzmaSDKEncoderDelegate;

@interface PLzmaSDKEncoder : NSObject <PLzmaSDKProgressDelegatePrivate> {
    struct SharedPtr<plzma::Encoder> { struct Encoder *_ptr; } _encoder;
    struct shared_ptr<PLzmaSDKProgressDelegate> { struct PLzmaSDKProgressDelegate *__ptr_; struct __shared_weak_count *__cntrl_; } _progressDelegate;
}

@property (weak, nonatomic) id<PLzmaSDKEncoderDelegate> delegate;
@property (nonatomic) BOOL shouldCreateSolidArchive;
@property (nonatomic) unsigned char compressionLevel;
@property (nonatomic) BOOL shouldCompressHeader;
@property (nonatomic) BOOL shouldCompressHeaderFull;
@property (nonatomic) BOOL shouldEncryptContent;
@property (nonatomic) BOOL shouldEncryptHeader;
@property (nonatomic) BOOL shouldStoreCreationTime;
@property (nonatomic) BOOL shouldStoreAccessTime;
@property (nonatomic) BOOL shouldStoreModificationTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onCPath:(const char *)a0 progress:(double)a1;
- (BOOL)open;
- (void)abort;
- (BOOL)compress;
- (void)addPath:(id)a0 withMode:(unsigned char)a1;
- (void)addPath:(id)a0 withMode:(unsigned char)a1 andArchivePath:(id)a2;
- (void)addStream:(id)a0 withArchivePath:(id)a1;
- (void)setPassword:(id)a0;
- (id)initWithStream:(id)a0 fileType:(unsigned char)a1 method:(unsigned char)a2 andDelegate:(id)a3;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
