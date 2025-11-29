@interface IESIMGroupBlockManagerModel : NSObject

@property (readonly, nonatomic) BOOL speakModeVisible;
@property (readonly, nonatomic) BOOL needGlobalSwitch;
@property (readonly, nonatomic) BOOL isAllSpeakingVisible;

- (id)initWithSpeakModeVisible:(BOOL)a0 needGlobalSwitch:(BOOL)a1 isAllSpeakingVisible:(BOOL)a2;

@end
