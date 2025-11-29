@class NSArray;
@protocol IESAVAssetAsynchronousLoaderDelegate;

@interface IESAVAssetAsynchronousLoader : NSObject

@property (retain, nonatomic) NSArray *assets;
@property (weak, nonatomic) id<IESAVAssetAsynchronousLoaderDelegate> delegate;
@property (nonatomic, getter=isLoading) BOOL loading;

- (void)setupAsset:(id)a0 atIndex:(long long)a1 group:(id)a2 assetArray:(id)a3;
- (void)loadAssetsAsynchronouslyWithCompletion:(id /* block */)a0;
- (void)cancelLoading;
- (void).cxx_destruct;
- (id)initWithAssets:(id)a0;

@end
