@interface CSJRewardDrawConfig : NSObject <NSCoding>

@property (nonatomic) unsigned long long max_draw_playtime;
@property (nonatomic) unsigned long long draw_rewarded_playtime;
@property (nonatomic) long long skip_btn_left_style;
@property (nonatomic) long long skip_btn_right_style;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
