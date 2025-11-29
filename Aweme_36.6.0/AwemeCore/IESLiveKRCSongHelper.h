@interface IESLiveKRCSongHelper : NSObject

+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })getVisibleStringWithSize:(struct CGSize { double x0; double x1; })a0 attr:(id)a1 words:(id)a2;
+ (id)adpterSentences:(id)a0 lyricViewConfig:(id)a1;
+ (id)divideSentenceTwoPart:(id)a0 cut:(int)a1;
+ (int)calcCutPosition:(id)a0 config:(id)a1 limitedWidth:(double)a2;

@end
