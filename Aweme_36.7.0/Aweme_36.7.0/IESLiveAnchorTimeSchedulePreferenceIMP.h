@class NSString;

@interface IESLiveAnchorTimeSchedulePreferenceIMP : NSObject <IESLiveAnchorTimeSchedulePreference>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)markEntryShown;
- (BOOL)isEntryShownBefore;

@end
