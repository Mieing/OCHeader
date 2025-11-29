@interface AWEAIGCVoiceFlashManager : NSObject

+ (id)sharedInstance;

- (BOOL)isSameDay:(id)a0 date2:(id)a1;
- (BOOL)enableSearchAIHomeLeftSideBar;
- (id)voiceFlashStorage;
- (long long)voiceFlashGuideCountAllMax;
- (void)saveVoiceFlashGuide:(id)a0 lastDayGuideCount:(long long)a1 guideCountAll:(long long)a2;
- (long long)voiceFlashGuideCountDayMax;
- (BOOL)shouldShowVoiceFlashGuide;
- (long long)voiceFlashPlayCountInner;

@end
