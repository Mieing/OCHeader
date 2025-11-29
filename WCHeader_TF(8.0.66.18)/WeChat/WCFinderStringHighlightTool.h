@interface WCFinderStringHighlightTool : NSObject

+ (id)getMentionInputStopTakenList;
+ (id)mentionRegular;
+ (id)ignoreRegular;
+ (id)emojiRegular;
+ (void)delayLoadEmailTopHosts;
+ (id)convertAllMentionTextToHtmlATag:(id)a0;
+ (id)covertAllMentionTextToWCLinkTag:(id)a0 mentionCount:(long long *)a1;

@end
