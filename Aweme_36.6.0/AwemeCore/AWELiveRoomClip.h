@interface AWELiveRoomClip : AWEBaseApiModel

@property (nonatomic) float orignX;
@property (nonatomic) float orignY;
@property (nonatomic) float width;
@property (nonatomic) float height;

+ (id)JSONKeyPathsByPropertyKey;

- (id)liveClip;
- (id)initWithClip:(id)a0;

@end
