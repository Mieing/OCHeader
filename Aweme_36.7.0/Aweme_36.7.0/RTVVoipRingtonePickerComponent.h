@class NSString;

@interface RTVVoipRingtonePickerComponent : NSObject <RTVVoipRingtonePickerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showVoipRingtonePickerWithExtra:(id)a0 dismissCompletion:(id /* block */)a1;
- (void)showVoipRingtoneHistoryPickerWithExtra:(id)a0 dismissCompletion:(id /* block */)a1;
- (void)__showVoipRingtonePickerWithDefaultSelectTabType:(unsigned long long)a0 extra:(id)a1 dismissCompletion:(id /* block */)a2;

@end
