@class NSNumber;

@interface IESLivePKFrequencyControlInvitedAnchor : NSObject <NSCoding>

@property (retain, nonatomic) NSNumber *firstRefusedTime;
@property (nonatomic) long long refusedCount;
@property (retain, nonatomic) NSNumber *hitControlTime;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToObject:(id)a0;

@end
