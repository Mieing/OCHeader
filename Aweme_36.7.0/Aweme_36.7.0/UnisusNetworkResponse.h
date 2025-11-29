@class NSDictionary, NSData, NSError, UnisusNetworkMetric;

@interface UnisusNetworkResponse : NSObject

@property (nonatomic) unsigned long long statuc_code;
@property (nonatomic) long long content_length;
@property (retain, nonatomic) NSData *raw_data;
@property (retain, nonatomic) UnisusNetworkMetric *metric;
@property (retain, nonatomic) NSDictionary *headers;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
