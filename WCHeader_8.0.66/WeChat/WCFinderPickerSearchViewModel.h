@class NSString, WCFinderFeedPickerParams;

@interface WCFinderPickerSearchViewModel : WCFinderSearchViewModel

@property (retain, nonatomic) WCFinderFeedPickerParams *params;
@property (copy, nonatomic) NSString *udfKVStr;
@property (retain, nonatomic) NSString *latestQueryText;

- (int)searchSceneFromPickerScene:(int)a0;
- (void)queryContactWith:(id)a0;
- (void)onQueryNextPageDataItem;
- (id)getCustomUdfKvJsonStr;
- (void)report22878DataWithFeedID:(id)a0 feedPos:(long long)a1 isClickAction:(BOOL)a2 isVideoFeed:(BOOL)a3;
- (void).cxx_destruct;

@end
