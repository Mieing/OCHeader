@class NSDictionary, AWECityModel, NSString;

@interface AWENearbyCityAndContext : NSObject <AWENearbyCityAndContextProtocol>

@property (retain, nonatomic) AWECityModel *city;
@property (nonatomic) BOOL isLocated;
@property (retain, nonatomic) NSDictionary *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCity:(id)a0 isLocated:(BOOL)a1 context:(id)a2;
- (void).cxx_destruct;

@end
