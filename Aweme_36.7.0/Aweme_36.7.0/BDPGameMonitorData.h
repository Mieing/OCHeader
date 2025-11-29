@interface BDPGameMonitorData : BDModel <NSCopying>

@property (nonatomic) double fps;
@property (nonatomic) long long drawcall;
@property (nonatomic) long long vert;
@property (nonatomic) long long tri;
@property (nonatomic) long long jank;
@property (nonatomic) long long jank_duration;
@property (nonatomic) double game_stutter;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
