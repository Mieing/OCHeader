@class NSString;

@interface AWEFileKitResourceMetricItem : NSObject

@property (copy, nonatomic) NSString *path;
@property (nonatomic) long long expiredDay;
@property (nonatomic) double expiredSize;

- (id)initWithPath:(id)a0 expiredDay:(long long)a1 expiredSize:(double)a2;
- (void).cxx_destruct;

@end
