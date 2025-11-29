@class WCDataItem, NSString;

@interface WCMomentsStarGuideViewModel : NSObject {
    BOOL _hasRecordedDisplay;
    BOOL _hasRecordedClick;
}

@property (readonly, nonatomic) WCDataItem *dataItem;
@property (readonly, nonatomic) long long scene;
@property (nonatomic) BOOL canShowStarGuideButton;
@property (copy, nonatomic) NSString *starGuideTips;
@property (copy, nonatomic) NSString *starGuideActionTitle;

- (id)initWithDataItem:(id)a0 scene:(long long)a1;
- (void)updateDataItem:(id)a0;
- (BOOL)validateDevice;
- (BOOL)validateDataItem;
- (BOOL)validateMediaItemList;
- (BOOL)validateMediaItemListForScene;
- (BOOL)shouldShowStarGuideButton;
- (BOOL)hasActionRecordForShowingStarGuideButton;
- (void)willDisplayGuideButton;
- (void)didClickGuideButton;
- (void).cxx_destruct;

@end
