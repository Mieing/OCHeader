@interface BDAirPlayProgressInfo : NSObject

@property (nonatomic) long long currentTime;
@property (nonatomic) long long duration;

+ (id)progressInfoWith:(long long)a0 duration:(long long)a1;

- (id)description;

@end
