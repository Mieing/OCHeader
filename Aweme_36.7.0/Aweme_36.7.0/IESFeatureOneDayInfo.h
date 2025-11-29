@class NSMutableArray, NSDate;

@interface IESFeatureOneDayInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSDate *dayDateTime;
@property (nonatomic) long long appOpenCount;
@property (retain, nonatomic) NSMutableArray *dayOpenInfoList;

- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
