@interface AWERecordDefaultCameraPositionUtils : NSObject

@property (class, nonatomic) long long devicePosition;
@property (class, nonatomic) BOOL skip;

+ (void)setDefaultPosition:(long long)a0;
+ (void)setDefaultPosition:(long long)a0 forPersistenceKey:(id)a1;
+ (long long)defaultPositionForPersistenceKey:(id)a0;
+ (long long)defaultPosition;

@end
