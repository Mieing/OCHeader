@interface ACCMusicVolumeStrategyResult : NSObject

@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL on;

+ (id)resultWithEnabled:(BOOL)a0 on:(BOOL)a1;

- (id)description;

@end
