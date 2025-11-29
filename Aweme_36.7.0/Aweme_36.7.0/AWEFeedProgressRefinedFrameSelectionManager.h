@interface AWEFeedProgressRefinedFrameSelectionManager : NSObject

+ (BOOL)shouldShock;
+ (BOOL)enableRefinedFrameSelection;
+ (double)getSliderDownDistance;
+ (double)getThumbHeight;
+ (double)getSliderUpDistance;
+ (BOOL)isRefinedFrameSelectionVideoDurationSatisfy:(id)a0;
+ (id)getFrameBeforeText;
+ (id)getFrameAfterText;
+ (double)getChapterThumbWidth;
+ (id)progressFrameSelectionDict;
+ (long long)frameSelectionMinLimitDuration;
+ (long long)frameSelectionMaxLimitDuration;
+ (id)sharedInstance;

@end
