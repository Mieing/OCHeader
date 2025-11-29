@class NSString;
@protocol ACCPublishMergeImageHelperProtocol;

@interface AWEPublishMergeImageOptimizeHelperImpl : NSObject <ACCPublishMergeImageOptimizeHelperProtocol>

@property (retain, nonatomic) id<ACCPublishMergeImageHelperProtocol> mergeImageHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)recodeImageData:(id)a0;
- (BOOL)enableImageMergeOptimize;
- (void)resetCachedImage:(long long)a0 workspace:(id)a1;
- (void)cacheImage:(long long)a0 workspace:(id)a1;
- (double)downsampleRate;
- (BOOL)shouldRecodeImage;
- (void).cxx_destruct;

@end
