@class NSDictionary, AWEAwemeModel;

@interface AWENearbyC2CoverTrackerModel : AWENearbyC2TrackerModel

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (nonatomic) double loadTime;
@property (nonatomic) BOOL successed;
@property (nonatomic) long long from;
@property (nonatomic) long long order;
@property (nonatomic) long long isBlackOrWhite;
@property (nonatomic) BOOL isFirstPull;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long loadType;
@property (nonatomic) long long pageType;
@property (copy, nonatomic) NSDictionary *freshImageShowtimeParams;

- (void).cxx_destruct;
- (id)init;

@end
