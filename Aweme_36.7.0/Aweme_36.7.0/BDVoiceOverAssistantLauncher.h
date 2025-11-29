@class NSString;

@interface BDVoiceOverAssistantLauncher : NSObject

@property (nonatomic) BOOL isStarted;
@property (nonatomic) BOOL isHooked;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) id /* block */ enableAssistantEngine;

+ (id)sharedInstance;

- (void)addNotifications;
- (void)startVoiceOverSDK;
- (void)voiceOverStatusChange:(id)a0;
- (void)setupVoiceOverHook;
- (void).cxx_destruct;
- (void)startEngine;

@end
