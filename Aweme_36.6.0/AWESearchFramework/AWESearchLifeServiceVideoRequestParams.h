@class NSString, NSDictionary;

@interface AWESearchLifeServiceVideoRequestParams : AWESearchLifeServiceBaseRequestParams

@property (copy, nonatomic) NSString *strLifeTheme;
@property (copy, nonatomic) NSDictionary *commonOnceParams;
@property (copy, nonatomic) NSDictionary *commonPassWithFilterParams;
@property (copy, nonatomic) NSDictionary *commonAllTimeParams;

- (id)generateParams;
- (void).cxx_destruct;

@end
