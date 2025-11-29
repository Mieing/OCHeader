@class NSDictionary;

@interface BDISettingsManager : NSObject

@property (nonatomic) long long lastCheck;
@property (retain) NSDictionary *settings;
@property (retain) NSDictionary *vidInfo;

+ (id)sharedInstance;

- (void)didStartUp;
- (void)addNotifyObserver;
- (void)handleResponse:(id)a0 jsonObj:(id)a1 error:(id)a2;
- (long long)s_integerValueForKey:(id)a0;
- (BOOL)s_boolValueForKey:(id)a0;
- (id)s_stringValueForKey:(id)a0;
- (id)s_objectValueForKey:(id)a0;
- (void)syncSettings:(BOOL)a0;
- (id)getVids;
- (void)willEnterForeground;
- (void).cxx_destruct;
- (void)dealloc;

@end
