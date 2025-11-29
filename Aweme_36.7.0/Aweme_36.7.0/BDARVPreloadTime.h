@interface BDARVPreloadTime : NSObject

@property (nonatomic) double preloadTime;
@property (nonatomic) double showTime;
@property (nonatomic) double clickTime;

+ (void)setClickTime:(double)a0 forKey:(id)a1;
+ (double)getShowTimeForKey:(id)a0;
+ (void)setPreloadTime:(double)a0 forKey:(id)a1;
+ (void)setShowTime:(double)a0 forKey:(id)a1;
+ (double)getPreloadTimeForKey:(id)a0;
+ (id)getPreloadTimeItemForKey:(id)a0;
+ (double)getClickTimeForKey:(id)a0;
+ (void)savePreloadTime:(id)a0 forKey:(id)a1;

@end
