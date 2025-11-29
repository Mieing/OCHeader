@class NSString;

@interface AWRewardedAdvertisingUnlockButtonPriorityHandler : NSObject <AWEPlayInteractionSpecialButtonPriorityHandlerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowRewardedAdvertisingUnlockedButton:(id)a0 context:(id)a1;

- (unsigned long long)shouldActivateSpecialButtonWithData:(id)a0 context:(id)a1;

@end
