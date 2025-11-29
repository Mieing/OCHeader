@class NSString, NSMutableDictionary, NSDictionary, NSMutableArray, NSObject;

@interface DTFLanguageManager : NSObject

@property (nonatomic) BOOL isDownloading;
@property (retain, nonatomic) NSMutableArray *blockList;
@property (nonatomic) long long downloadCount;
@property (retain, nonatomic) NSString *isv;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSMutableDictionary *faceDict;
@property (retain, nonatomic) NSMutableDictionary *docDict;
@property (retain, nonatomic) NSMutableDictionary *guideDict;
@property (retain, nonatomic) NSMutableDictionary *downloadDict;
@property (retain, nonatomic) NSObject *lockObject;
@property (copy, nonatomic) NSDictionary *textDiffMapping;
@property (retain, nonatomic) NSString *ocrResultStr;
@property (retain, nonatomic) NSString *languageType;

+ (id)sharedInstance;

- (id)faceStringWithKey:(id)a0;
- (id)guideStringWithKey:(id)a0;
- (id)docStringWithKey:(id)a0;
- (BOOL)checkNeedPreload;
- (BOOL)checkUpdateDocWithVersion:(id)a0;
- (BOOL)checkUpdateFaceWithVersion:(id)a0;
- (BOOL)checkUpdateGuideWithVersion:(id)a0;
- (void)startGuideDownloadWithCompletion:(id /* block */)a0;
- (void)startFaceDownloadWithCompletion:(id /* block */)a0;
- (void)startDocDownloadWithCompletion:(id /* block */)a0;
- (void)downloadWithURL:(id)a0 fileName:(id)a1 backupUrl:(id)a2 backupFileName:(id)a3 downloadPath:(id)a4 completion:(id /* block */)a5;
- (id)getCurrentFullLanguage;
- (id)getCurrentLanguage;
- (id)getLanguageKey:(id)a0;
- (id)dictWithPath:(id)a0;
- (id)getFileWithPath:(id)a0 fileName:(id)a1;
- (void)initializeLanguageDictionary;
- (id)replaceValue:(id)a0 WithKey:(id)a1 orignalStr:(id)a2;
- (void).cxx_destruct;

@end
