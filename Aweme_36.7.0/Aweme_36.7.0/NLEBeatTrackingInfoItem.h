@interface NLEBeatTrackingInfoItem : NSObject

@property (nonatomic) long long offset;
@property (nonatomic) long long beat;

- (id)initWithOffset:(long long)a0 beat:(long long)a1;

@end
