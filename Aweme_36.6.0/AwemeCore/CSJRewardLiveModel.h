@class NSString;

@interface CSJRewardLiveModel : NSObject <NSCoding>

@property (nonatomic) long long rewardLiveType;
@property (nonatomic) long long rewardLiveStyle;
@property (copy, nonatomic) NSString *rewardLiveText;
@property (nonatomic) long long rewardStartTime;
@property (nonatomic) long long rewardCloseTime;

- (void)setupDataWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryValue;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
