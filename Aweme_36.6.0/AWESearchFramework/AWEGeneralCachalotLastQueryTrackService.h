@class NSString;

@interface AWEGeneralCachalotLastQueryTrackService : NSObject

@property (copy, nonatomic) NSString *previousQuery;
@property (nonatomic) double previousTimestamp;
@property (copy, nonatomic) NSString *previousSource;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
