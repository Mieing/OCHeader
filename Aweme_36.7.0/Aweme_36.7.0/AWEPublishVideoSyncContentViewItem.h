@class NSString;

@interface AWEPublishVideoSyncContentViewItem : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *iconImgName;
@property (nonatomic) long long itemType;
@property (nonatomic) BOOL isOn;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) id /* block */ onChangeBlock;
@property (nonatomic) BOOL isBanMode;
@property (copy, nonatomic) NSString *banToast;
@property (copy, nonatomic) NSString *trackJsonString;

- (void)didSelectTipIcon;
- (void)didSelectSwitch:(BOOL)a0;
- (double)itemViewHeigth;
- (id)syncTouTiaoTitle;
- (void)showUlikeTipsAlert;
- (void)showSyncTipsAlert;
- (void)showOrginTipsAlert;
- (void)showExclusiveTipAlert;
- (void)showAutoSyncTipsAlert;
- (double)configSubTitleHeight;
- (void).cxx_destruct;

@end
