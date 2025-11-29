@class NSString, NSNumber;

@interface BDARewardInfoModel : NSObject

@property (copy, nonatomic) NSString *rewardType;
@property (retain, nonatomic) NSNumber *rewardAmount;

- (id)toEncodedString;
- (id)initWithSourceModel:(id)a0;
- (void).cxx_destruct;
- (id)toDictionary;

@end
