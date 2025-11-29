@class AWEHPChannelInvisibleWaterMarkImageView, NSMutableDictionary, UIImage, NSString;

@interface AWEHPInvisibleWaterMarkPluginController : NSObject <AWEUserMessage, AWEDigitalWellbeingMessage, AWEBasicModeMessage, AWEHPChannelPluginControllerProtocol>

@property (retain, nonatomic) AWEHPChannelInvisibleWaterMarkImageView *invisibleWaterMarkView;
@property (retain, nonatomic) AWEHPChannelInvisibleWaterMarkImageView *topInvisibleWaterMarkView;
@property (retain, nonatomic) AWEHPChannelInvisibleWaterMarkImageView *bottomInvisibleWaterMarkView;
@property (retain, nonatomic) NSMutableDictionary *channelModelDic;
@property (nonatomic) BOOL tabBarIsHidden;
@property (nonatomic) double tabBarAlpha;
@property (retain, nonatomic) UIImage *waterMark;
@property (nonatomic) BOOL hasRequestMarkImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)teenModeDidChange:(BOOL)a0 isLogout:(BOOL)a1;
- (void)basicModeDidChange:(BOOL)a0;
- (void)bottomChannel:(id)a0 tabBarDidSetHidden:(BOOL)a1;
- (void)bottomChannel:(id)a0 tabBarDidSetAlpha:(double)a1;
- (void)channelViewDidAppear:(id)a0;
- (void)channelViewDidDisappear:(id)a0;
- (void)channel:(id)a0 enterWithModel:(id)a1;
- (void)channel:(id)a0 leaveWithModel:(id)a1;
- (void)changeTabBarInvisibleWaterMarkImage:(id)a0;
- (BOOL)p_checkCanShowInvisibleWaterMarkByChannelId:(id)a0;
- (void)p_updateInvisibleWaterMarkStatus;
- (BOOL)enableMarkOpt;
- (void)p_initTopInvisibleWaterMarkIfNeed;
- (void)p_initBottomInvisibleWaterMarkIfNeed;
- (void)p_initInvisibleWaterMarkIfNeed;
- (void)removeMarkView;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
