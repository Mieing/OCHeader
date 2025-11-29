@class NSArray, NSString;

@interface AWEHomePagePerfMetricsMonitorSessionBaseDetailParams : NSObject <NSCopying>

@property (retain, nonatomic) NSArray *events;
@property (copy, nonatomic) NSString *session;
@property (nonatomic) double beginTime;
@property (nonatomic) double endTime;
@property (copy, nonatomic) NSString *channelId;

- (id)initWithEvents:(id)a0 session:(id)a1 channelId:(id)a2 beginTime:(double)a3 endTime:(double)a4;
- (id)initWithEvents:(id)a0 session:(id)a1 beginTime:(double)a2 endTime:(double)a3;
- (id)sessionIdentification;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isValid;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
