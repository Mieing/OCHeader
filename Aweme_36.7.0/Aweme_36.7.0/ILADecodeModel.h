@class ILAVideoFramesGenerator, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface ILADecodeModel : NSObject {
    struct shared_ptr<ILASDK::DecodeAssetDelegate> { struct DecodeAssetDelegate *__ptr_; struct __shared_weak_count *__cntrl_; } decodeImpl;
}

@property (retain, nonatomic) ILAVideoFramesGenerator *generator;
@property (retain, nonatomic) NSMutableArray *reportArray;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *extraFrameQueue;

- (int)rotateMode:(long long)a0;
- (struct shared_ptr<ILASDK::DecodeImageBuffer> { struct DecodeImageBuffer *x0; struct __shared_weak_count *x1; })generageImageBuffer:(id)a0 framePts:(long long)a1 orientation:(long long)a2;
- (struct shared_ptr<ILASDK::DecodeImageBuffer> { struct DecodeImageBuffer *x0; struct __shared_weak_count *x1; })generateOptimizeICloudImage:(id)a0 isVideo:(BOOL)a1 requestAlbumProtocol:(id)a2;
- (struct vector<std::shared_ptr<ILASDK::DecodeImageBuffer>, std::allocator<std::shared_ptr<ILASDK::DecodeImageBuffer>>> { void *x0; void *x1; struct __compressed_pair<std::shared_ptr<ILASDK::DecodeImageBuffer> *, std::allocator<std::shared_ptr<ILASDK::DecodeImageBuffer>>> { void *x0; } x2; })generateFrameForVideo:(id)a0 sourceFrom:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; })a1 frameList:(struct vector<long long, std::allocator<long long>> { long long *x0; long long *x1; struct __compressed_pair<long long *, std::allocator<long long>> { long long *x0; } x2; })a2 size:(struct CGSize { double x0; double x1; })a3 requestAlbumProtocol:(id)a4 extraFramesCallback:(id /* block */)a5;
- (struct vector<std::shared_ptr<ILASDK::DecodeImageBuffer>, std::allocator<std::shared_ptr<ILASDK::DecodeImageBuffer>>> { void *x0; void *x1; struct __compressed_pair<std::shared_ptr<ILASDK::DecodeImageBuffer> *, std::allocator<std::shared_ptr<ILASDK::DecodeImageBuffer>>> { void *x0; } x2; })generateFrameForImage:(id)a0 size:(struct CGSize { double x0; double x1; })a1 requestAlbumProtocol:(id)a2;
- (id)initWithGenerateFrameCallback:(id /* block */)a0 requestAlbumProtocol:(id)a1;
- (struct shared_ptr<ILASDK::DecodeAssetDelegate> { struct DecodeAssetDelegate *x0; struct __shared_weak_count *x1; })decodeImpl;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
