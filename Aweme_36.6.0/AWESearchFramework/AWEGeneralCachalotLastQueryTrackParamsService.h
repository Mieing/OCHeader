@class NSString;

@interface AWEGeneralCachalotLastQueryTrackParamsService : NSObject

@property (copy, nonatomic) NSString *previousQuery;
@property (nonatomic) double previousTimestamp;
@property (copy, nonatomic) NSString *previousSource;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
