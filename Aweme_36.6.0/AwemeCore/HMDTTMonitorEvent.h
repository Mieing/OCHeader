@class NSString, NSDictionary;

@interface HMDTTMonitorEvent : NSObject

@property (readonly, copy, nonatomic) NSString *logType;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSDictionary *data;

- (id)initWithLogType:(id)a0 serviceName:(id)a1 data:(id)a2;
- (void).cxx_destruct;

@end
