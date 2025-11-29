@class NSString;

@interface IESLocalLifeFontHostService : HTSService <IESLocalLifeFontHostService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)iesll_currentScale;
+ (double)iesll_defaultScale;
+ (id)iesll_onlineFontWithName:(id)a0 size:(double)a1 defaultFont:(id)a2;
+ (BOOL)iesll_bigFontModeOn;

- (id)iesll_adaptiveFontOfSize:(double)a0 weight:(long long)a1;
- (id)iesll_generalFontOfSize:(double)a0 weight:(long long)a1;
- (id)iesll_adaptiveGeneralFontOfClass:(long long)a0 weight:(long long)a1;

@end
