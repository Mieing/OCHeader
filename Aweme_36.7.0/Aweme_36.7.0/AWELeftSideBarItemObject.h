@class AWEHPChannelBadgeTask, NSString, AWELeftSideBarBasePresenter;
@protocol AWEHPListKitItemControllerProtocol;

@interface AWELeftSideBarItemObject : NSObject <AWEHPListKitItemControllerObjectProtocol>

@property (retain, nonatomic) id<AWEHPListKitItemControllerProtocol> itemController;
@property (readonly, nonatomic) AWELeftSideBarBasePresenter *presenter;
@property (retain, nonatomic) AWEHPChannelBadgeTask *badgeTask;
@property (retain, nonatomic) AWEHPChannelBadgeTask *tempBadgeTask;
@property (copy, nonatomic) NSString *badgeVersion;
@property (nonatomic) long long loadCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithItemController:(id)a0;
- (void).cxx_destruct;

@end
