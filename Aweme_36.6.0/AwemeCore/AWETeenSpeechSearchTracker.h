@interface AWETeenSpeechSearchTracker : NSObject

+ (void)trackHomeSpeechGuideShow:(id)a0 guideType:(id)a1;
+ (void)trackHomeSpeechGuideClick:(id)a0 guideType:(id)a1;
+ (void)trackSearchMicrophoneUseDuration:(id)a0 groupID:(id)a1 duration:(long long)a2 clickType:(id)a3;
+ (void)trackSearchMicrophoneClick:(id)a0 groupID:(id)a1 clickType:(id)a2;
+ (void)trackSpeechInitDuration:(long long)a0;

@end
