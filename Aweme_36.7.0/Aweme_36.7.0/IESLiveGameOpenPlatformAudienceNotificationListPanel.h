@class IESLivePopupItem, NSArray, NSString, UILabel, UIView, IESLiveGameOpenPlatformAudienceNotificationList;

@interface IESLiveGameOpenPlatformAudienceNotificationListPanel : NSObject <UITableViewDelegate, UITableViewDataSource, IESLiveGameOpenPlatformPluginStateSubscriber>

@property (copy, nonatomic) NSArray *notes;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) IESLiveGameOpenPlatformAudienceNotificationList *listView;
@property (retain, nonatomic) IESLivePopupItem *popupItem;
@property (copy, nonatomic) id /* block */ onHideBlock;
@property (copy, nonatomic) id /* block */ onShowBlock;
@property (nonatomic) BOOL shouldPresentPreviousView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onShow:(id /* block */)a0;
- (void)onHide:(id /* block */)a0;
- (void)openPlatformPlugin:(id)a0 stateDidChanged:(long long)a1;
- (void)reloadData;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)hide;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)show;
- (id)initWithNotifications:(id)a0;

@end
