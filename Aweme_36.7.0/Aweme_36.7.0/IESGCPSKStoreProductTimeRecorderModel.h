@interface IESGCPSKStoreProductTimeRecorderModel : NSObject

@property (nonatomic) double openTime;
@property (nonatomic) double presentTime;
@property (nonatomic) double startLoadTime;
@property (nonatomic) double finishLoadTime;
@property (nonatomic) BOOL cacheHit;

@end
