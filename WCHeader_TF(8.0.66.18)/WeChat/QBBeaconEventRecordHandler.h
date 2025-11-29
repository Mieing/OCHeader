@interface QBBeaconEventRecordHandler : NSObject

+ (id)getDefaultHandler;

- (id)init;
- (void)createRecordObject:(id)a0 withName:(id)a1 isSucceed:(BOOL)a2 elapse:(long long)a3 size:(long long)a4 params:(id)a5 isRealEvent:(BOOL)a6;
- (id)createEventResultFromParam:(id)a0 params:(id)a1;
- (void)appendStringWithUrlEncoding:(id)a0 str:(id)a1 pos:(id)a2 encoding:(BOOL)a3;
- (id)createEventObj:(id)a0 isSucceed:(BOOL)a1 elapse:(long long)a2 size:(long long)a3 params:(id)a4 isRealEvent:(BOOL)a5;
- (BOOL)recordUserEvent:(id)a0 isSucceed:(BOOL)a1 elapse:(long long)a2 size:(long long)a3 params:(id)a4;

@end
