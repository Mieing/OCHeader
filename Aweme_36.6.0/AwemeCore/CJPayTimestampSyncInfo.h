@class NSURL, NSString;

@interface CJPayTimestampSyncInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double offset;
@property (nonatomic) double offsetLocal;
@property (nonatomic) double estimatedErr;
@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *date;
@property (nonatomic) double clientRequestTime;
@property (nonatomic) double serverRespTime;
@property (nonatomic) double clientReceiveTime;
@property (nonatomic) double clientReceiveTimeLocal;

- (double)systemStartTimestamp;
- (void).cxx_destruct;
- (double)systemUpTime;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
