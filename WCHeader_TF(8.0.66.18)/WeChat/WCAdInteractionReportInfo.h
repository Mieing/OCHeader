@interface WCAdInteractionReportInfo : NSObject <NSCoding>

@property (nonatomic) unsigned long long appearTimestamp;
@property (nonatomic) unsigned long long disappearTimestamp;
@property (nonatomic) unsigned long long statyTime;
@property (nonatomic) unsigned int exposureCount;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
