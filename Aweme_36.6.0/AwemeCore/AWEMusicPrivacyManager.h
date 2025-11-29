@class NSString, NSUserDefaults, AWEMusicPrivacyPopupView;
@protocol AWEMusicPrivacyManagerDelegate;

@interface AWEMusicPrivacyManager : NSObject <AWEMusicStreamingPopupViewDelegate>

@property (retain, nonatomic) AWEMusicPrivacyPopupView *privacyView;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSString *secUserIDMD5;
@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (weak, nonatomic) id<AWEMusicPrivacyManagerDelegate> delegate;
@property (readonly, nonatomic) BOOL playlistIsVisible;
@property (readonly, nonatomic) BOOL musicIsVisible;

- (id)initWithSecId:(id)a0;
- (void)showPrivacyActionSheetOnViewIfNeed:(id)a0 musicVc:(id)a1;
- (void)p_showPrivacyActionSheetOnView:(id)a0 musicVc:(id)a1;
- (void)popupViewDidDisappear:(id)a0 method:(long long)a1;
- (void).cxx_destruct;
- (BOOL)hasShown;

@end
