@class BDByteCastPPDanmakuBean;

@interface BDByteCastPPPlayControlInfo : NSObject

@property (nonatomic) BOOL mute;
@property (nonatomic) long long loopMode;
@property (nonatomic) long long shuffle;
@property (nonatomic) float speed;
@property (nonatomic) long long stretch;
@property (nonatomic) long long skip;
@property (nonatomic) long long inheritConfig;
@property (nonatomic) long long featureConfig;
@property (retain, nonatomic) BDByteCastPPDanmakuBean *danmaku;

+ (id)modelContainerPropertyGenericClass;

- (void).cxx_destruct;

@end
