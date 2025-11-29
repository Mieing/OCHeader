@class NSDictionary;

@interface CJPaySyncChannelsConfigModel : JSONModel

@property (nonatomic) double initDelayTime;
@property (nonatomic) BOOL disableThrottle;
@property (copy, nonatomic) NSDictionary *sdkInitChannels;
@property (copy, nonatomic) NSDictionary *selectNotifyChannels;
@property (copy, nonatomic) NSDictionary *selectHomePageChannels;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
