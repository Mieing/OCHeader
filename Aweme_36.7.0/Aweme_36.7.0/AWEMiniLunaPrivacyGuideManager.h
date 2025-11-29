@class NSString, AWEMusicStreamingMiniLunaGuidePopupView, AWEMusicDSPEventModel, NSUserDefaults;
@protocol AWEMiniLunaPrivacyGuideDelegate;

@interface AWEMiniLunaPrivacyGuideManager : NSObject <AWEMusicStreamingPopupViewDelegate>

@property (retain, nonatomic) AWEMusicStreamingMiniLunaGuidePopupView *privacyView;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSString *secUserIDMD5;
@property (retain, nonatomic) NSUserDefaults *userDefaults;
@property (weak, nonatomic) id<AWEMiniLunaPrivacyGuideDelegate> delegate;
@property (retain, nonatomic) AWEMusicDSPEventModel *eventModel;

- (id)initWithSecId:(id)a0;
- (BOOL)showPrivacyActionSheetOnViewIfNeed:(id)a0 musicVc:(id)a1;
- (BOOL)p_showPrivacyActionSheetOnView:(id)a0 musicVc:(id)a1;
- (id)p_key;
- (void)p_trackPopupShow;
- (id)p_trackParams;
- (void)popupViewDidDisappear:(id)a0 method:(long long)a1;
- (void).cxx_destruct;
- (BOOL)hasShown;

@end
