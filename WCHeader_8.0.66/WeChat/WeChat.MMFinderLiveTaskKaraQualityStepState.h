@interface WeChat.MMFinderLiveTaskKaraQualityStepState : NSObject

@property (nonatomic, retain) void /* unknown type, empty encoding */ QoS;
@property (nonatomic) void /* unknown type, empty encoding */ videoQualityLevel;
@property (nonatomic) void /* unknown type, empty encoding */ isH265;
@property (nonatomic) void /* unknown type, empty encoding */ isEnhanceEnabled;
@property (nonatomic) void /* unknown type, empty encoding */ isAutoSwitchStreamConfigEnabled;
@property (nonatomic) void /* unknown type, empty encoding */ autoSwitchStreamMinInterval;
@property (nonatomic) void /* unknown type, empty encoding */ autoSwitchStreamMaxCount;
@property (nonatomic) void /* unknown type, empty encoding */ useSmoothSwitchStreamMode;

- (id)initWithQoS:(id)a0 videoQualityLevel:(int)a1 isH265:(BOOL)a2 isEnhanceEnabled:(BOOL)a3 isAutoSwitchStreamConfigEnabled:(BOOL)a4 autoSwitchStreamMinInterval:(long long)a5 autoSwitchStreamMaxCount:(long long)a6 useSmoothSwitchStreamMode:(BOOL)a7;
- (id)init;
- (void).cxx_destruct;

@end
