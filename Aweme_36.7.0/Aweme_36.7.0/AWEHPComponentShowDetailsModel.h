@interface AWEHPComponentShowDetailsModel : NSObject

@property (nonatomic) double lastShowTimestamp;
@property (nonatomic) long long showIndex;
@property (nonatomic) long long lastShowNum;

- (void)updateShowTimeDetails:(double)a0 badgeTrackModel:(id)a1;
- (id)init;

@end
