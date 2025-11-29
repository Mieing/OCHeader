@interface IESFeatureOneDayOpenInfo : NSObject <NSCoding>

@property (nonatomic) long long beginTimeMsInt;
@property (nonatomic) long long endTimeMsInt;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
