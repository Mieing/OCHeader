@class NSString, NSMutableDictionary, QStatisticer, QMediator;
@protocol QConfigManagerDelegate;

@interface QConfigManager : NSObject

@property (copy, nonatomic) NSString *businessKey;
@property (copy, nonatomic) NSString *configDirectoryPath;
@property (copy, nonatomic) NSString *versionPlistPath;
@property (retain, nonatomic) NSMutableDictionary *versionDict;
@property (retain, nonatomic) NSMutableDictionary *tempVersionDict;
@property (nonatomic) int unfinishedTasks;
@property (retain, nonatomic) NSMutableDictionary *indoorDict;
@property (nonatomic) BOOL hasStartedUpdate;
@property (weak, nonatomic) id<QConfigManagerDelegate> delegate;
@property (weak, nonatomic) QMediator *mediator;
@property (weak, nonatomic) QStatisticer *statistics;

- (id)getCurrentConfigVersions;
- (id)getCurrentIndoorConfigFilePath;
- (void)checkConfigUpdate;
- (void)checkOfflineConfigUpdateWithVersion:(id)a0 md5:(id)a1 callback:(id /* block */)a2;
- (void)doCheckConfigUpdate:(const void *)a0 checkCallback:(id /* block */)a1;
- (void)doDownloadFile:(const void *)a0 callback:(id /* block */)a1;
- (BOOL)saveData:(id)a0 fileName:(id)a1 key:(id)a2 userData:(id)a3;
- (void)onUpdateDidFinish;
- (void)onUpdateDidFailWithError:(id)a0;
- (void)onUpdateNotRequire;
- (void)statisticUpdateSucceess;
- (void)statisticUpdateFailInfo:(id)a0;
- (void)statisticMapConfigFileExist;
- (id)apiKey;
- (id)sdkVersion;
- (id)appendParameterString;
- (struct FileUpdateReq { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x0; int x1; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x2; })constructRequestWithName:(id)a0 key:(id)a1;
- (void)constructMapConfigItems:(void *)a0 callbacks:(id)a1;
- (void)checkStyleIDStringChange;
- (id)getMd5KeyFromVersionKey:(id)a0;
- (BOOL)hasIndoorPrevilege;
- (id)initWithConfigPreference:(id)a0;
- (void)setupVersionPlist;
- (void)setupVersionDict;
- (void).cxx_destruct;

@end
