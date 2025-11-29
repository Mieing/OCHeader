@class AWEIMNextGenerationUploadConfigModel;

@interface AWEIMNextGenerationUploadConfigManager : NSObject

@property (retain) AWEIMNextGenerationUploadConfigModel *innerConfig;
@property (retain) AWEIMNextGenerationUploadConfigModel *openConfig;
@property (retain) AWEIMNextGenerationUploadConfigModel *openImageConfigV2;
@property (retain) AWEIMNextGenerationUploadConfigModel *openFileConfig;

+ (id)sharedInstance;

- (BOOL)checkConfigValid:(id)a0;
- (void)fetchConfigIfNeed;
- (void).cxx_destruct;
- (void)fetchConfigWithCompletion:(id /* block */)a0;
- (void)resetConfig;

@end
