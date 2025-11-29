@interface AWENearbyPOIInfoUIUtils : AWENearbyCardUIUtils

+ (double)getScreenHeight;
+ (id)loadCDNResourceData:(long long)a0;
+ (void)trackNearbyGeckoResourceMonitorWithResult:(long long)a0 loadType:(long long)a1 channel:(id)a2 filePath:(id)a3 errorMsg:(id)a4 cdnLoadTime:(long long)a5;
+ (void)preloadGeckoResource;
+ (BOOL)isScreenHeightLarge667;
+ (id)getAdaptedBgImageWithHueIndex:(long long)a0;
+ (double)cardBottomOffset;
+ (double)tilingHeadImgHeigh;
+ (double)scrollTilingHeadHeighInSimpic;
+ (double)scrollTilingCardBottomOffsetInSimpic;
+ (id)getNearbyPOIInfoCardChannelName;
+ (id)backgroundImagePathWithHueIndex:(long long)a0;

@end
