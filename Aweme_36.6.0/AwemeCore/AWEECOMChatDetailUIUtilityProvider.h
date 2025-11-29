@class NSString;

@interface AWEECOMChatDetailUIUtilityProvider : NSObject <BDECPigeonUIUtilityProvider_I>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)bdpcd_imageNamed:(id)a0;
- (id)bdpcd_colorWithHexString:(id)a0 alpha:(double)a1;
- (id)bdpcd_colorWithHexString:(id)a0;
- (id)bdpcd_generalRegularFontOfSize:(double)a0;
- (id)bdpcd_generalMediumFontOfSize:(double)a0;
- (id)bdpcd_generalSemiboldFontOfSize:(double)a0;
- (void)bdpcd_setImageWithURLString:(id)a0 imageView:(id)a1;
- (void)bdpcd_imageView:(id)a0 imageFromRemoteNamed:(id)a1;

@end
