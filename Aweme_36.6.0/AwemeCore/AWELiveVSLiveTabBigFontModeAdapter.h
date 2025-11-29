@class NSString;

@interface AWELiveVSLiveTabBigFontModeAdapter : NSObject <IESLiveVSLiveTabBigFontModeAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)adaptBigFontModeViewHeight:(double)a0;
- (double)adaptBigFontModeFontSize:(double)a0;
- (BOOL)enableAdaptBigFontMode;
- (id)paidStreamBlockViewTitleLabelFont;
- (id)paidStreamBlockViewSubTitleLabelFont;
- (id)paidStreamBlockViewActionButtonFont;
- (BOOL)enableAdaptTheaterBigFontMode;

@end
