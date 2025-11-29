@class NSString, NSDictionary;

@interface AWEPortraitUsageData : NSObject <NSCoding>

@property (retain, nonatomic) NSString *date;
@property (retain, nonatomic) NSDictionary *strategy_usage;
@property (retain, nonatomic) NSDictionary *default_usage;

- (id)toEventParams;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
