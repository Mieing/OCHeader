@class AWEMVChannelInflowRequestModel;

@interface AWEMVChannelDataControllerConfig : NSObject

@property (nonatomic) unsigned long long feedType;
@property (nonatomic) unsigned long long usageType;
@property (retain, nonatomic) AWEMVChannelInflowRequestModel *inflowRequestModel;

+ (id)defaultConfig;

- (id)initWithFeedType:(unsigned long long)a0 usageType:(unsigned long long)a1 inflowRequestModel:(id)a2;
- (id)initWithFeedType:(unsigned long long)a0 usageType:(unsigned long long)a1;
- (void).cxx_destruct;

@end
