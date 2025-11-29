@class NSLock, NSMutableDictionary, NSString;

@interface AppMonitorSdkAdapter : NSObject <AppMonitorEventServiceDelegate>

@property (retain, nonatomic) NSMutableDictionary *eventDict;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSMutableDictionary *eventCounter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)uploadEventForEventId:(id)a0;
- (void)sendRawEvent:(id)a0;
- (void)parseRawEvent:(id)a0;
- (void)addLogInSdk:(id)a0 rawPoint:(BOOL)a1;
- (long long)getEventCountForId:(id)a0;
- (id)getDictionaryForUploadEvnetnWithId:(id)a0;
- (id)getEventForUTDimensionValueSet:(id)a0 module:(id)a1 monitorPoint:(id)a2 extraInfo:(id)a3;
- (id)uploadEvent:(id)a0 event:(id)a1 rawPoint:(BOOL)a2;
- (void)mark:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
