@class AWEIMGroupSPActionBarSettings, AWEIMGroupSPImageTaskSettings, AWEIMGroupSPCollectCardSettings, AWEIMGroupSPBannerSettings, AWEIMGroupSPRedPacketRainOnBoardingSettings, AWEIMGroupSPTaskSettings;

@interface AWEIMGroupSPBusinessSettings : NSObject

@property (readonly, nonatomic) BOOL enable;
@property (readonly, nonatomic) BOOL SPTaskEnable;
@property (readonly, nonatomic) AWEIMGroupSPTaskSettings *spTaskSettings;
@property (readonly, nonatomic) AWEIMGroupSPBannerSettings *bannerSettings;
@property (readonly, nonatomic) AWEIMGroupSPImageTaskSettings *imageTaskSettings;
@property (readonly, nonatomic) AWEIMGroupSPActionBarSettings *acbSettings;
@property (readonly, nonatomic) AWEIMGroupSPActionBarSettings *acbColorSettings;
@property (readonly, nonatomic) AWEIMGroupSPCollectCardSettings *collectCardSettgins;
@property (readonly, nonatomic) AWEIMGroupSPRedPacketRainOnBoardingSettings *redPacketRainOnboardingSettings;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0;

@end
