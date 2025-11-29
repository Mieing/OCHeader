@class NSString, NSDictionary;

@interface AWEEnterpriseIMLynxContainerViewModel : AWEEnterpriseIMMessageCardBaseViewModel

@property (copy, nonatomic) NSString *sourceUrl;
@property (copy, nonatomic) NSDictionary *lynxInitialProperties;
@property (nonatomic) double lynxWidth;
@property (nonatomic) double lynxHeight;
@property (nonatomic) BOOL useBullet;
@property (nonatomic) BOOL ignoreLynxSizeCallBack;

- (void)configDataWithContent:(id)a0 ext:(id)a1 localExt:(id)a2;
- (BOOL)isVaildViewModel;
- (void)p_configDefaultData;
- (void).cxx_destruct;

@end
