@class NSString, NSMutableSet, AWESettingItemModel;

@interface AWESettingPageTrackManager : NSObject

@property (nonatomic) unsigned long long clickOrder;
@property (retain, nonatomic) AWESettingItemModel *lastClickItem;
@property (nonatomic) double leaveSettingPageTimestamp;
@property (retain, nonatomic) NSMutableSet *hasTrackShowIDSet;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterSideBarMethod;
@property (nonatomic) double enterSideBarTimestamp;

- (void)willDisplayItemModel:(id)a0;
- (void)didSelectItemModel:(id)a0;
- (id)titleWithItemModel:(id)a0;
- (void)didEnterSettingPage;
- (void)didLeaveSettingPage;
- (void).cxx_destruct;
- (id)init;

@end
