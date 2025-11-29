@class NSString;

@interface AWEVideoPlayDanmakuConfigModel : AWEBaseApiModel

@property (nonatomic) long long confType;
@property (nonatomic) long long opacity;
@property (nonatomic) long long fontSize;
@property (nonatomic) long long speed;
@property (nonatomic) long long region;
@property (nonatomic) BOOL danmakuSwitch;
@property (nonatomic) BOOL antiBlockSwitch;
@property (nonatomic) BOOL shieldWordSwitch;
@property (copy, nonatomic) NSString *switchFrom;
@property (copy, nonatomic) NSString *shieldWords;
@property (nonatomic) BOOL smartModeSwitch;
@property (nonatomic) BOOL isDefaultOpacity;
@property (nonatomic) BOOL isDefaultSize;
@property (nonatomic) BOOL isDefaultSpeed;
@property (nonatomic) BOOL isDefaultRegion;
@property (nonatomic) BOOL isDefaultSmartModeSwitch;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
