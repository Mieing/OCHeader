@class NSString, NSArray;

@interface AWEECMultiMallTabAnimationRecord : NSObject <NSCoding>

@property (copy, nonatomic) NSString *tabId;
@property (nonatomic) double activeDuration;
@property (copy, nonatomic) NSArray *showTimeSecArray;

+ (id)recordWithTabId:(id)a0 activeDuration:(double)a1;

- (void)recordShow;
- (void)refreshShowTimes;
- (void).cxx_destruct;
- (id)toDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
