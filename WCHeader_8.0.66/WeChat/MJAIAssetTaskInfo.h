@class NSString, OMJAssetInfo;

@interface MJAIAssetTaskInfo : NSObject

@property (nonatomic) unsigned long long index;
@property (retain, nonatomic) OMJAssetInfo *originalAssetInfo;
@property (copy, nonatomic) NSString *assetFileKey;
@property (copy, nonatomic) NSString *adjustedAssetFilePath;
@property (nonatomic) BOOL cdnUploadCacheEnabled;

- (id)initWithIndex:(unsigned long long)a0 originalAssetInfo:(id)a1;
- (void).cxx_destruct;

@end
