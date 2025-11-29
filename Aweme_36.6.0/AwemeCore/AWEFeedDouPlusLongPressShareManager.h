@class NSString, AWEAwemeModel;
@protocol AWEFeedDouPlusLongPressShareManagerDelegate;

@interface AWEFeedDouPlusLongPressShareManager : NSObject <AWEFeedDouPlusLongPressShareManager>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *referString;
@property (weak, nonatomic) id<AWEFeedDouPlusLongPressShareManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)douPlusManagerWithModel:(id)a0 referString:(id)a1;

- (BOOL)authorIsCurrentUser;
- (BOOL)shouldShowLocalPromotionEntrance;
- (BOOL)authorIsPrivateAccount;
- (id)getClickDouPlusTrackParamsNewEntrance:(BOOL)a0;
- (id)getDouPlusShowClickTrackParams;
- (void)handleLocalPromotion;
- (BOOL)shouldShowDouECP;
- (void)showPressPanelDouPLus:(BOOL)a0;
- (void)showLocalPromotion;
- (BOOL)needShowDouPlus;
- (id)douPlusTitle;
- (id)douPlusImage;
- (id)douPlusImageForNewLongPressPanel;
- (BOOL)prepareToClickDouPLus;
- (void)clickDouPLus;
- (void)showDouPLus;
- (void).cxx_destruct;

@end
