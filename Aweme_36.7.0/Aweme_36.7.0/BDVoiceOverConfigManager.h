@class NSString, NSMutableDictionary, BDVoiceOverConfigModel;

@interface BDVoiceOverConfigManager : NSObject

@property (retain, nonatomic) BDVoiceOverConfigModel *configModel;
@property (retain, nonatomic) NSMutableDictionary *pageConfigDict;
@property (copy, nonatomic) NSString *productID;

+ (id)sharedInstance;

- (void)updateConfigModel:(id)a0;
- (void)fetchAccessibilityLabelConfigWithCompletion:(id /* block */)a0;
- (void)loadConfigWithResponseData:(id)a0 completion:(id /* block */)a1;
- (id)filePathWithVersion:(id)a0;
- (id)modelWithFilePath:(id)a0;
- (id)fileDirectoryWithVersion:(id)a0;
- (void)downloadConfigFileWithUrl:(id)a0 targetPath:(id)a1 completion:(id /* block */)a2;
- (BOOL)isConfigAvailable;
- (id)configModelWithViewControllerName:(id)a0;
- (id)rootDirectory;
- (void).cxx_destruct;
- (id)init;
- (void)createDirectoryIfNeeded:(id)a0;

@end
