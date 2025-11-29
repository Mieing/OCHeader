@class AVAsset, NSArray, NSData, UIImage;

@interface MJMovieComposingAssetsClassifyHelper : NSObject

@property (nonatomic) BOOL isCancelled;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSData *classifyResult;
@property (retain, nonatomic) AVAsset *videoAsset;
@property (retain, nonatomic) UIImage *imageAsset;
@property (retain, nonatomic) NSArray *mmAssetInfos;
@property (retain, nonatomic) NSArray *mjAssetInfos;
@property unsigned long long state;

- (id)initWithMMAssetInfos:(id)a0;
- (id)initWithMJAssetInfos:(id)a0;
- (void)prepareClassifyResultWithCompletion:(id /* block */)a0;
- (void)prepareClassifyResultWithTimeout:(double)a0 completion:(id /* block */)a1;
- (void)prepareClassifyResultWithMMAssetInfos:(id)a0 timeout:(double)a1 completion:(id /* block */)a2;
- (void)prepareClassifyResultWithMJAssetInfos:(id)a0 timeout:(double)a1 completion:(id /* block */)a2;
- (id)getClassifyResult;
- (void)setupTimeoutMechanismWithTimeout:(double)a0;
- (void)cancel;
- (void)handleAssetClassifyResult:(id)a0;
- (void)callCompletionOnError:(id)a0;
- (void)callCompletionOnSucceesWithData:(id)a0;
- (void).cxx_destruct;

@end
