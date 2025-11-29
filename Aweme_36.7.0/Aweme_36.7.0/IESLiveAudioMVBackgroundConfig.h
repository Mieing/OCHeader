@class NSDictionary;
@protocol IESLiveRoomService;

@interface IESLiveAudioMVBackgroundConfig : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) long long scalingMode;
@property (nonatomic) double playerWidth;
@property (nonatomic) double playerHeight;
@property (nonatomic) unsigned long long playerFeature;
@property (nonatomic) BOOL enableMaskView;
@property (nonatomic) double maskAlpha;
@property (nonatomic) BOOL enableDynamicColorBG;
@property (nonatomic) BOOL enablePlayerGradient;
@property (weak, nonatomic) id<IESLiveRoomService> room;
@property (copy, nonatomic) NSDictionary *degradeConfig;

- (void)initializeWithType:(unsigned long long)a0;
- (id)initWithRoom:(id)a0 audioMVBackgroundType:(unsigned long long)a1;
- (void).cxx_destruct;

@end
