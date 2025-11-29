@class NSString;

@interface AWELiveACCFontImp : NSObject <IESLiveACCFont>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)acc_systemFontOfSize:(double)a0;
- (id)acc_systemFontOfSize:(double)a0 weight:(long long)a1;
- (id)acc_boldSystemFontOfSize:(double)a0;
- (void)acc_setEnableUbuntuFont:(BOOL)a0;
- (id)acc_boldItalicFontWithSize:(double)a0;
- (id)acc_semiBoldSystemFontOfSize:(double)a0;
- (id)acc_italicSystemFontOfSize:(double)a0;
- (id)onLineFontWithName:(id)a0 size:(double)a1;

@end
