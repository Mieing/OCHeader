@class NSString;

@interface IESECShopPreloadConfiguration : NSObject

@property (nonatomic) double validDuration;
@property (nonatomic) double invalidSeconds;
@property (nonatomic) double reinitValidDuration;
@property (nonatomic) BOOL enableReinitValid;
@property (nonatomic) unsigned long long preloadType;
@property (copy, nonatomic) NSString *customTabPath;
@property (copy, nonatomic) NSString *customInfoPath;

- (void).cxx_destruct;

@end
