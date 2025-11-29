@class NSString;

@interface AWEIMOnlinePrivacyManager : NSObject <AWEIMHalfScreenContainerVCDelegate>

@property (nonatomic) BOOL didShowOnlineStatusPopupView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)writeOnlinePrivacyDataToDiskFromServerWithRawData:(id)a0;
+ (id)showOnlinePrivacyPopupView:(id)a0;
+ (id)showOnlinePrivacyPopupView:(id)a0 useCardUIStyle:(BOOL)a1;
+ (id)frequencyControlModel;
+ (id)showDisrecommendPopupViewWithEnterFrom:(id)a0;
+ (id)showOnlinePrivacyPopupView:(id)a0 withUIstyle:(long long)a1;
+ (id)showOnlinePrivacyOptionPopupViewTitle:(id)a0 subtitle:(id)a1 setting:(id)a2 enterFrom:(id)a3 style:(long long)a4;
+ (void)updatePrivacyPopupViewShown;
+ (void)showToastForStyle:(unsigned long long)a0 isError:(BOOL)a1;
+ (void)switchOnlinePrivacySetWithStyle:(unsigned long long)a0 userList:(id)a1 onView:(id)a2;
+ (void)writeOnlinePrivacyDataToDiskFromServer:(id)a0;
+ (id)showOnlinePrivacyPopupView;
+ (id)showOnlinePrivacyPopupViewTitle:(id)a0 subtitle:(id)a1 setting:(id)a2 enterFrom:(id)a3;
+ (id)onlineFriendsListForOnlinePopView;
+ (void)trackOnlineStatusGuideClickWithClickType:(id)a0 enterFrom:(id)a1;
+ (void)showOnlinePrivacySelectPartExclusiveListVCWithUserArray:(id)a0 topVC:(id)a1 enterFrom:(id)a2;
+ (id)readLastOnlinePrivacyDataFromDisk;
+ (void)writeLastOnlinePrivacyDataToDisk:(id)a0;
+ (id)sharedManager;

- (double)externalAssignTopDragHeight;

@end
