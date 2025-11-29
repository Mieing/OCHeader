@class NSString;

@interface IESLiveNativeAppAbilitySwitchModel : NSObject

@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) id /* block */ onSwitch;
@property (nonatomic) BOOL abilityStatus;

- (void).cxx_destruct;

@end
