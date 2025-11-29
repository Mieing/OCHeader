@class NSDictionary;

@interface BDPSettingsParams : NSObject

@property (copy, nonatomic) NSDictionary *requestParams;
@property (copy, nonatomic) NSDictionary *requestHeaders;

- (void)updateWithParams:(id)a0;
- (void).cxx_destruct;

@end
