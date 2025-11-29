@class NSString;

@interface IESLiveActivityEmojiNewTipModel : NSObject <NSCoding>

@property (copy, nonatomic) NSString *activityEmojiKey;
@property (nonatomic) double latestDeliveryTime;
@property (nonatomic) BOOL hasBeenClicked;
@property (nonatomic) long long alreadyHintTimes;

- (id)initWithEmojiKey:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
