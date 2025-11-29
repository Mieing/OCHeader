@interface WCFinderLiveShareReporter : NSObject

+ (void)reportShareWithDataItem:(id)a0 shareScene:(unsigned long long)a1 shareType:(unsigned long long)a2 quickShare:(BOOL)a3 shareExtra:(id)a4;
+ (void)reportShareWithLiveId:(id)a0 feedId:(id)a1 finderUsername:(id)a2 shareScene:(unsigned long long)a3 shareType:(unsigned long long)a4 quickShare:(BOOL)a5 sessionBuffer:(id)a6 shareExtra:(id)a7;

@end
