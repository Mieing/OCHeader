@class NSString, NSObject, PGLAppStats;
@protocol OS_dispatch_queue;

@interface PGLSecCheck : NSObject

@property (nonatomic) double lastTime;
@property (nonatomic) PGLAppStats *mAppStats;
@property (copy, nonatomic) NSString *sof_chara;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)dicToNSString:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)shareInstance;

- (void)initSofChara;
- (id)getSofChara:(id)a0;
- (void)setForeTime:(double)a0;
- (void)setBackTime:(double)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
