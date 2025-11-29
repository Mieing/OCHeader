@class NSString;

@interface IESIMFontService : HTSService <IESIMFontService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)bigFontModeOn;
- (unsigned long long)currentFontMode;
- (id)semiBoldSystemFontOfSize:(double)a0;
- (id)ui_fontWithName:(id)a0 size:(double)a1;
- (id)fontOfClass:(long long)a0 weight:(long long)a1;
- (id)generalFontOfClass:(long long)a0 weight:(long long)a1;
- (id)generalFontOfSize:(double)a0 weight:(long long)a1;
- (id)adaptiveOnlineFontWithName:(id)a0 class:(long long)a1;
- (id)onlineFontWithName:(id)a0 class:(long long)a1;
- (id)onlineFontWithName:(id)a0 size:(double)a1;
- (id)adaptiveOnlineFontWithName:(id)a0 size:(double)a1;
- (id)adaptiveGeneralFontOfClass:(long long)a0 weight:(long long)a1;
- (long long)p_duxFontClassWithIESIMFontClass:(long long)a0;
- (long long)p_duxFontWeightWithIESIMFontWeight:(long long)a0;
- (unsigned long long)p_iesimFontModeWithDUXMode:(unsigned long long)a0;
- (id)boldSystemFontOfSize:(double)a0;
- (id)systemFontOfSize:(double)a0 weight:(long long)a1;
- (id)systemFontOfSize:(double)a0;
- (double)currentScale;

@end
