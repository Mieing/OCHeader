@interface MJVoiceInputScentenceParser : NSObject

+ (id)parseSpeechRecognitionScentencesFromResponse:(id)a0;
+ (id)parseFullSpeechRecognitionScentencesFromResponse:(id)a0;
+ (id)parseLongSpeechRecognitionScentencesFromResponse:(id)a0;
+ (id)createCaptionGroupsFromMainCaptionItems:(id)a0 mainLanguage:(id)a1;
+ (id)changeCaptionItemsTimeRangeToRelative:(id)a0 groupStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
+ (id)parseScentenceTimeRangesWithWordInfos:(id)a0 wholeText:(id)a1;
+ (id)parseScentenceTimeRangesWithWordInfos:(id)a0 wholeText:(id)a1 splittingType:(unsigned long long)a2;
+ (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })expandLeftForTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 previousEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 expandSeconds:(double)a2;
+ (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })expandRightForTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 nextStartTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 expandSeconds:(double)a2;
+ (id)expandLeftForCaptionItems:(id)a0 previousTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
+ (id)expandLeftForCaptionItems:(id)a0;
+ (id)expandRightForCaptionItems:(id)a0 nextTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
+ (id)expandLeftForCaptionGroups:(id)a0;

@end
