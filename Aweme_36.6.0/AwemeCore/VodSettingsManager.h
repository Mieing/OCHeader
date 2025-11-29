@class NSMutableDictionary, NSTimer, VodSettingsFetcher, VodSettingsConfigEnv;
@protocol VodSettingsNetProtocol;

@interface VodSettingsManager : NSObject

@property (nonatomic) BOOL didLoad;
@property (retain, nonatomic) VodSettingsFetcher *fetcher;
@property (retain, nonatomic) NSMutableDictionary *storages;
@property (retain, nonatomic) NSTimer *scheduleTimer;
@property (nonatomic) long long maxRetryTimes;
@property (nonatomic) long long fetchInterval;
@property (nonatomic) long long debug;
@property (retain, nonatomic) id<VodSettingsNetProtocol> netImp;
@property (readonly, nonatomic) VodSettingsConfigEnv *env;

+ (id)shareSettings;
+ (id)versionString;

- (id)getVodNumber:(id)a0 dValue:(id)a1;
- (id)getVodDict:(id)a0;
- (void)loadLocal:(BOOL)a0;
- (id)getVodString:(id)a0 dValue:(id)a1;
- (id)getVodArray:(id)a0 dValue:(id)a1;
- (id)getMDLNumber:(id)a0 dValue:(id)a1;
- (id)getMDLString:(id)a0 dValue:(id)a1;
- (id)getMDLDict:(id)a0;
- (id)getMDLArray:(id)a0 dValue:(id)a1;
- (id)getJson:(long long)a0;
- (void)_loadLocalSettings;
- (id)getNumber:(long long)a0 key:(id)a1 dValue:(id)a2;
- (id)getString:(long long)a0 key:(id)a1 dValue:(id)a2;
- (id)getDict:(long long)a0 key:(id)a1;
- (id)getArray:(long long)a0 key:(id)a1 dValue:(id)a2;
- (void)vodSettingsFetcher:(id)a0 resultWithData:(id)a1 orError:(id)a2 requestedWithModule:(id)a3 andConfigKey:(id)a4;
- (void)_resetScheduleTimer:(long long)a0;
- (void)_storeSettingsInfo:(long long)a0 incrementally:(BOOL)a1 dict:(id)a2;
- (void)_notifySettingsUpdate:(long long)a0;
- (void)_scheduleEvent:(id)a0;
- (void)refreshIfNeed:(long long)a0;
- (void)refreshWithModule:(long long)a0;
- (void)refreshWithModule:(long long)a0 key:(id)a1;
- (id)getUploadNumber:(id)a0 dValue:(id)a1;
- (id)getUploadString:(id)a0 dValue:(id)a1;
- (id)getUploadDict:(id)a0;
- (id)getUploadArray:(id)a0 dValue:(id)a1;
- (void)setCommonString:(id)a0 value:(id)a1;
- (void)setCommonNumber:(id)a0 value:(id)a1;
- (void)setCommonDict:(id)a0 value:(id)a1;
- (id)getCommonNumber:(id)a0 dValue:(id)a1;
- (id)getCommonString:(id)a0 dValue:(id)a1;
- (id)getCommonDict:(id)a0;
- (void)vodSettingsFetcher:(id)a0 resultWithData:(id)a1 orError:(id)a2;
- (void).cxx_destruct;
- (void)refresh;
- (id)init;
- (void)dealloc;

@end
