@class NSString, NSNumber, IESECTraceTimeMetric;

@interface IESECPBMessageExtra : NSObject

@property (nonatomic) long long logicClock;
@property (retain, nonatomic) NSString *msgId;
@property (retain, nonatomic) IESECTraceTimeMetric *metric;
@property (copy, nonatomic) NSString *contentType;
@property (retain, nonatomic) NSNumber *targetRoomID;
@property (retain, nonatomic) Class generalMessageClass;

- (void).cxx_destruct;
- (id)description;

@end
