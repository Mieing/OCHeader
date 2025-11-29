@interface IESLiveInteractVibrationConfig : NSObject

@property (nonatomic) long long type;
@property (nonatomic) unsigned long long count;
@property (nonatomic) double interval;

- (id)initWithShakeSettingDict:(id)a0;
- (id)init;

@end
