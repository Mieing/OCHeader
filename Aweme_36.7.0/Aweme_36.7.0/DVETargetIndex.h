@interface DVETargetIndex : NSObject

@property (nonatomic) long long trackIndex;
@property (nonatomic) long long slotIndex;

- (id)initWithTrackIndex:(long long)a0 slotIndex:(long long)a1;

@end
