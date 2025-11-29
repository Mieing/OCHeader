@class NSString;

@interface AWEUserRegionInfo : NSObject

@property (nonatomic) unsigned long long region;
@property (copy, nonatomic) NSString *userRegion;
@property (nonatomic) BOOL isLegacyUser;

- (void).cxx_destruct;

@end
