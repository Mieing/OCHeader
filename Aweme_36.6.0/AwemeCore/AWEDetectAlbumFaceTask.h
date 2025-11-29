@class PHFetchResult;

@interface AWEDetectAlbumFaceTask : NSOperation

@property (retain, nonatomic) PHFetchResult *fetchResult;
@property (nonatomic) unsigned long long maxAssetCount;
@property (nonatomic) unsigned long long detectedCount;
@property (copy, nonatomic) id /* block */ didUpdatedBlock;
@property (copy, nonatomic) id /* block */ assetFilterBlock;

+ (id)dispatchQueue;

- (id)initWithFetchResult:(id)a0 maxAssetCount:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)main;

@end
