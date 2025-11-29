@class NSArray, NSString;

@interface AWEHomePagePerfMetricsMonitorSessionBaseParams : NSObject <NSCopying>

@property (retain, nonatomic) NSArray *events;
@property (copy, nonatomic) NSString *session;
@property (copy, nonatomic) NSString *channelId;

- (id)sessionIdentification;
- (id)initWithEvents:(id)a0 session:(id)a1 channelId:(id)a2;
- (id)initWithEvents:(id)a0 session:(id)a1;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isValid;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
