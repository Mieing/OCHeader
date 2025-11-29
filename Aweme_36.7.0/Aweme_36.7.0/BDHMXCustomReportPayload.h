@class NSString, NSDictionary;

@interface BDHMXCustomReportPayload : NSObject

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSDictionary *commonParams;
@property (copy, nonatomic) NSDictionary *metric;
@property (copy, nonatomic) NSDictionary *category;
@property (copy, nonatomic) NSDictionary *timing;
@property (copy, nonatomic) NSDictionary *baseInfo;
@property (copy, nonatomic) NSDictionary *extra;
@property (nonatomic) unsigned long long maySample;
@property (nonatomic) long long reportType;
@property (nonatomic) long long platform;
@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSString *bid;
@property (copy, nonatomic) NSString *containerBid;
@property (nonatomic) unsigned long long bidSource;
@property (copy, nonatomic) NSString *bizTag;
@property (weak, nonatomic) id engineView;
@property (copy, nonatomic) NSString *containerID;

- (void).cxx_destruct;
- (id)init;

@end
