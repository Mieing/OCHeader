@class NSString, NSDictionary;

@interface AWEPOIDynamicTrackParamConfigModel : NSObject

@property (nonatomic) BOOL shouldDisableParams;
@property (nonatomic) long long priorityToTrackParams;
@property (nonatomic) long long priorityToSession;
@property (copy, nonatomic) NSString *paramName;
@property (copy, nonatomic) NSDictionary *rawData;

- (void).cxx_destruct;
- (id)initWithRawData:(id)a0;

@end
