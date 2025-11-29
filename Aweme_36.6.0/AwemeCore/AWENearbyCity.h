@class AWECityModel;

@interface AWENearbyCity : NSObject

@property (retain, nonatomic) AWECityModel *city;
@property (nonatomic) BOOL isLocated;

- (id)initWithCity:(id)a0 isLocated:(BOOL)a1;
- (void).cxx_destruct;

@end
