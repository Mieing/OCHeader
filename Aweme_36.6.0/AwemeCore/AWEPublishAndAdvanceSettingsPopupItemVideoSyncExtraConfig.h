@class AWEPublishVideoSyncModel_V2;
@protocol AWEPublishAndAdvanceSettingsPopupItemVideoSyncEvent;

@interface AWEPublishAndAdvanceSettingsPopupItemVideoSyncExtraConfig : AWEPublishAndAdvanceSettingsPopupItemBaseExtraConfig

@property (nonatomic) BOOL ulikeShow;
@property (nonatomic) BOOL ulikeSelected;
@property (nonatomic) BOOL xiguaShow;
@property (nonatomic) BOOL xiguaSelected;
@property (retain, nonatomic) AWEPublishVideoSyncModel_V2 *syncModel;
@property (weak, nonatomic) id<AWEPublishAndAdvanceSettingsPopupItemVideoSyncEvent> eventProxy;

- (void).cxx_destruct;

@end
