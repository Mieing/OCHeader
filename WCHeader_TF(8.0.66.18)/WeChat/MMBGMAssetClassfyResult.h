@class NSData;

@interface MMBGMAssetClassfyResult : NSObject

@property (copy, nonatomic) id /* block */ getClassfyBlock;
@property (retain, nonatomic) NSData *assetClassfyResult;

- (BOOL)hasGetClassfyResult;
- (BOOL)needCheckClassfyResult;
- (void)setCheckClassfyResultBlock:(id /* block */)a0;
- (void)asyncCheckClassfyResult:(id /* block */)a0;
- (void).cxx_destruct;

@end
