@class NSString;

@interface AWERecordBachProcessorConfig : NSObject

@property (copy, nonatomic) NSString *resourcePath;
@property (copy, nonatomic) NSString *algorithmConfigPath;
@property (copy, nonatomic) NSString *assetId;
@property (copy, nonatomic) NSString *algorithmName;
@property (copy, nonatomic) NSString *cachePath;

- (void).cxx_destruct;

@end
