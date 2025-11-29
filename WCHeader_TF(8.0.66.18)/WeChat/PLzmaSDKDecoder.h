@class NSArray, NSString;
@protocol PLzmaSDKDecoderDelegate;

@interface PLzmaSDKDecoder : NSObject <PLzmaSDKProgressDelegatePrivate> {
    struct SharedPtr<plzma::Decoder> { struct Decoder *_ptr; } _decoder;
    struct shared_ptr<PLzmaSDKProgressDelegate> { struct PLzmaSDKProgressDelegate *__ptr_; struct __shared_weak_count *__cntrl_; } _progressDelegate;
}

@property (weak, nonatomic) id<PLzmaSDKDecoderDelegate> delegate;
@property (readonly, nonatomic) unsigned int count;
@property (readonly, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onCPath:(const char *)a0 progress:(double)a1;
- (BOOL)open;
- (void)abort;
- (id)itemAt:(unsigned int)a0;
- (BOOL)extractToPath:(id)a0 withItemsFullPath:(BOOL)a1;
- (BOOL)extractItems:(id)a0 toPath:(id)a1 withItemsFullPath:(BOOL)a2;
- (BOOL)extractItemsToStreams:(id)a0;
- (BOOL)testItems:(id)a0;
- (BOOL)test;
- (void)setPassword:(id)a0;
- (id)initWithStream:(id)a0 fileType:(unsigned char)a1 andDelegate:(id)a2;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
