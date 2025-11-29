@class NSString, AWESettingsTableViewCell;

@interface AWESettingsTableViewCellConfigImpl : NSObject <AWESettingsTableViewCellBizAbilityProtocol>

@property (weak, nonatomic) AWESettingsTableViewCell *weakObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (void)configInit;

- (double)footerHeightForSectionModel:(id)a0;
- (void)setGeckoImageView:(id)a0 color:(id)a1;
- (BOOL)adapterBigFont:(id)a0;
- (BOOL)adapterModernBigFont:(id)a0;
- (double)screenAvailableWidth;
- (void)highlightWithAnimation:(id)a0;
- (void).cxx_destruct;

@end
