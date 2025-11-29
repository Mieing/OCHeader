@class NSLock, NSMutableDictionary;

@interface BDLocationHMDCommonData : NSObject

@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSMutableDictionary *commonData;

- (void)uploadWithToken:(id)a0 andExpName:(id)a1;
- (id)initCommonData;
- (void)updateHMDDataWithLocationInfo:(id)a0 timeGap:(double)a1 timeDuration:(double)a2 errorCode:(id)a3 isTimeout:(BOOL)a4 isCancel:(BOOL)a5 apiTag:(id)a6 expName:(id)a7 token:(id)a8 replaceTag:(long long)a9;
- (void).cxx_destruct;

@end
