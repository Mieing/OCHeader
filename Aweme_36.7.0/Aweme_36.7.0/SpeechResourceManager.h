@class NSString, NSArray, NSMutableArray, SpeechLogTracker;

@interface SpeechResourceManager : NSObject

@property (retain) NSString *deviceId;
@property (retain) NSString *appId;
@property (retain) NSString *appVersion;
@property (retain) NSString *rootPath;
@property (retain) NSString *engineName;
@property (retain) NSString *address;
@property (retain) NSMutableArray *ttsNeedFetchModelNames;
@property (retain) NSArray *ttsLanguageModelNames;
@property (retain) NSArray *ttsVoiceModelNames;
@property BOOL useOnlineModel;
@property (retain) SpeechLogTracker *logTracker;

+ (id)shareInstance;

- (id)getTtsVoiceModelName:(id)a0;
- (id)getTtsLanguageModelName:(id)a0;
- (id)getModelPath:(id)a0;
- (int)unzipModel:(id)a0 message:(id *)a1;
- (BOOL)checkModelExist:(id)a0;
- (void)checkMultipleModelsVersion:(id)a0 completion:(id /* block */)a1;
- (void)fetchMultipleModels:(id)a0 completion:(id /* block */)a1;
- (BOOL)checkModelExist;
- (id)getModelPath;
- (void)setOnlineModelEnable:(BOOL)a0;
- (void)setSpeechEngineName:(id)a0;
- (void)setTtsVoiceType:(id)a0;
- (void)setTtsLanguage:(id)a0;
- (void)checkModelVersion:(id)a0 completion:(id /* block */)a1;
- (void)checkModelVersion:(id /* block */)a0;
- (void)fetchModelByName:(id)a0 completion:(id /* block */)a1;
- (void)fetchModel:(id /* block */)a0;
- (BOOL)extractModel:(id)a0;
- (void).cxx_destruct;
- (void)setup;

@end
