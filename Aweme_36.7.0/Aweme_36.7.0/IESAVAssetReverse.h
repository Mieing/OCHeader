@class IESMMMediaExporter, NSString, AVURLAsset, NSURL;

@interface IESAVAssetReverse : NSObject <IESAssetReverseProtocol>

@property (nonatomic) BOOL shouldCancelReverse;
@property (retain, nonatomic) AVURLAsset *asset;
@property (retain, nonatomic) IESMMMediaExporter *audioExporter;
@property (retain, nonatomic) NSURL *reverseAudioUrl;
@property (copy, nonatomic) NSString *decrypKey;
@property (copy, nonatomic) NSString *encrypKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appWillResignAction:(id)a0;
- (void)cancle;
- (id)p_getCompressionProps;
- (id)videoCompsitionWithAsset:(id)a0;
- (int)decryptVideo:(id)a0 dstPath:(id)a1;
- (int)encryptVideo:(id)a0 dstPath:(id)a1;
- (void)reverseAsset:(id /* block */)a0 progressBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAVAsset:(id)a0;

@end
