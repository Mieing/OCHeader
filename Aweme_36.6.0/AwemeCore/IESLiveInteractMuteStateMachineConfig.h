@class NSString;

@interface IESLiveInteractMuteStateMachineConfig : NSObject

@property (nonatomic) unsigned long long maskMuteState;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSString *unMuteToastByOther;
@property (copy, nonatomic) NSString *muteToastByOther;

- (void).cxx_destruct;

@end
