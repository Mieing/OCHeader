@class NSString, NSDate;

@interface HMDOTTraceConfig : NSObject

@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *customHighOrderTraceID;
@property (copy, nonatomic) NSString *traceParent;
@property (nonatomic) BOOL isForcedUplaod;
@property (retain, nonatomic) NSDate *startDate;
@property (nonatomic) unsigned long long insertMode;
@property (nonatomic) BOOL isMovingLine;
@property (copy, nonatomic) NSString *type;

+ (id)generateRandom16LengthString;

- (id)generateTraceID;
- (BOOL)isvalidHexString:(id)a0;
- (id)getTraceIDWithTraceParent:(id)a0;
- (id)generateTraceIDWithCCustomHighOrderTraceID:(id)a0;
- (void).cxx_destruct;
- (id)initWithServiceName:(id)a0;

@end
