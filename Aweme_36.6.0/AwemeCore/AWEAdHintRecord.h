@class NSArray;

@interface AWEAdHintRecord : NSObject <NSCoding>

@property (nonatomic) long long dislikeCount;
@property (copy, nonatomic) NSArray *lastThreeHintDates;

- (void)clearDislike;
- (void)clearHintDates;
- (void)dislikeOnce;
- (void)showHintOnce;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
