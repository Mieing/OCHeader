@interface WCMomentsSpringUtilities : NSObject

+ (unsigned long long)lengthOfSpringText:(id)a0;
+ (void)fixTextForSpringTextView:(id)a0 croppedText:(BOOL *)a1;
+ (id)stringByRemovingLinesInString:(id)a0;
+ (id)stringByRemovingFirstSpacesInString:(id)a0;
+ (BOOL)canPostSpringText:(id)a0;
+ (BOOL)canPostSpringFeed:(id)a0 maxImageCount:(unsigned long long)a1 selectedSightDraft:(id)a2 inputText:(id)a3;
+ (BOOL)canDisplaySpringStyleForDataItem:(id)a0;
+ (BOOL)canDisplaySpringStyleForCommentsInDataItem:(id)a0;
+ (BOOL)canDisplaySpringStyleForComment:(id)a0 inDataItem:(id)a1;
+ (BOOL)canDisplaySpringStyleForCommentText:(id)a0 inDataItem:(id)a1;
+ (id)getLiveShareItemThatDisplaysSpringSourceForDataItem:(id)a0;
+ (id)getLiveShareItemThatDisplaysSpringSourceForDataItem:(id)a0 enterLiveMode:(long long)a1;
+ (BOOL)canEnterFinderLiveUsingLiveInfoModeWithShareItem:(id)a0;
+ (BOOL)canEnterFinderLiveUsingFinderUsernameModeWithShareItem:(id)a0;
+ (BOOL)canDisplaySpringSourceForDataItem:(id)a0;
+ (BOOL)openSpringSourceWithDataItem:(id)a0 urlString:(id)a1;
+ (id)springActionSheetItemTitle;
+ (id)springNewCommitTitle;
+ (id)finderLiveSourceName;
+ (id)getLocaleStringFromJson:(id)a0;
+ (id)createSpringActionSheetItem;
+ (void)customizeSpringActionItemView:(id)a0 forActionSheetItem:(id)a1;
+ (void)printFinderShareItem:(id)a0;
+ (void)printLiveShareItem:(id)a0;

@end
