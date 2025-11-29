@class NSThread;

@interface TencentLBSLocationReGeocoder : NSObject

@property (weak, nonatomic) NSThread *runThread;

+ (id)getPoiWithJSONObject:(id)a0;
+ (void)getLevelThreeSubWithJSONObject:(id)a0 tencentLocation:(id)a1;
+ (void)getLevelZeroWithJSONObject:(id)a0 tencentLocation:(id)a1;
+ (void)getLevelOneWithJSONObject:(id)a0 tencentLocation:(id)a1;
+ (void)getLevelThreeWithJSONObject:(id)a0 tencentLocation:(id)a1;
+ (void)getLevelFourWithJSONObject:(id)a0 tencentLocation:(id)a1;
+ (id)dataToDictionary:(id)a0 random:(int)a1;
+ (void)getTheBestLocationData:(id)a0 tencentLocation:(id)a1;
+ (id)getPostDictionaryWithCLLocation:(id)a0 requestLevel:(unsigned long long)a1 appName:(id)a2 type:(int)a3 smallAppKey:(id)a4;
+ (id)getPostDictionaryWithCLLocation:(id)a0 requestLevel:(unsigned long long)a1 appName:(id)a2 smallAppKey:(id)a3;
+ (id)getPostDictionaryWithCLLocation:(id)a0 requestLevel:(unsigned long long)a1 appName:(id)a2 beacons:(id)a3 smallAppKey:(id)a4;

- (id)initWithRunThread:(id)a0;
- (void)syncPerformOnThread:(id)a0 withBlock:(id /* block */)a1;
- (void)asyncPerformOnThread:(id)a0 withBlock:(id /* block */)a1;
- (void)runBlock:(id /* block */)a0;
- (id /* block */)initCompletionBlockWithCoordinateType:(unsigned long long)a0 requestLevel:(unsigned long long)a1 random:(int)a2 compeltionBlock:(id /* block */)a3;
- (int)getWlanfixWithDict:(id)a0 withDef:(int)a1;
- (int)getWlanUseWithDict:(id)a0 withDef:(int)a1;
- (BOOL)reGeocoderWithParameter:(id)a0 withMaxTimeout:(double)a1 coordinateType:(unsigned long long)a2 compeltionBlock:(id /* block */)a3;
- (void).cxx_destruct;

@end
