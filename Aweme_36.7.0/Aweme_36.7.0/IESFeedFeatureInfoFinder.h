@interface IESFeedFeatureInfoFinder : NSObject

+ (id)sharedInstance;

- (id)infoForItemID:(id)a0;
- (id)getLastRangeInfoList:(long long)a0 key:(id)a1 excludeThis:(BOOL)a2;
- (id)getLastItemID;

@end
