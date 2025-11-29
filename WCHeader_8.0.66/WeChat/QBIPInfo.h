@class NSArray;

@interface QBIPInfo : NSObject <NSCoding>

@property (nonatomic) int eIPType;
@property (nonatomic) int iTotalPollNum;
@property (nonatomic) int currPollNum;
@property (nonatomic) double lifeTimeSince1970;
@property (retain, nonatomic) NSArray *ipArrays;
@property (nonatomic) int currIpIndex;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
