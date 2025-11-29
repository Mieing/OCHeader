@class NSString, NSMutableDictionary;

@interface BDPPerformanceAPIDataManager : NSObject <BDPWarmBootMessage> {
    NSMutableDictionary *_performanceDic;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)cleanWarmCacheWithUniqueID:(id)a0;
- (void)recordAppServiceLoadStartTime:(double)a0 endTime:(double)a1 withUniqueID:(id)a2 pkgName:(id)a3;
- (void)recordAppClickTime:(double)a0 withUniqueID:(id)a1;
- (void)recordPKGDownloadStartTime:(double)a0 endTime:(double)a1 withUniqueID:(id)a2 pkgName:(id)a3 pkgSize:(unsigned long long)a4;
- (id)getPerformanceTimingArrayWithUniqueID:(id)a0;
- (void).cxx_destruct;
- (id)_init;

@end
