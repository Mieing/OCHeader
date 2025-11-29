@class IESLiveFilterItem, NSMutableDictionary;

@interface IESLiveRTCPlayerConfig : NSObject

@property (retain, nonatomic) NSMutableDictionary *runtimeParameters;
@property (nonatomic) BOOL muted;
@property (nonatomic) double volume;
@property (retain, nonatomic) IESLiveFilterItem *eyeProtectFilterItem;
@property (nonatomic) double eyeProtectFilterIntensityValue;
@property (nonatomic) BOOL eyeProtectFilterEnable;

- (void).cxx_destruct;
- (id)init;

@end
