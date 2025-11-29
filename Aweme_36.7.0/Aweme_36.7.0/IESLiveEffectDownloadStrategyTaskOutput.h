@class NSArray;

@interface IESLiveEffectDownloadStrategyTaskOutput : NSObject

@property (copy, nonatomic) NSArray *downloadAssetIds;
@property (copy, nonatomic) NSArray *forceFrontDownloadAssetIds;

- (id)initWithDownloadAssetIds:(id)a0 forceFrontDownloadAssetIds:(id)a1;
- (void).cxx_destruct;

@end
