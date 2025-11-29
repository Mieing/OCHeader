@class NSString;

@interface AWEECOMIMDynamicCardCommonFunctionImp : NSObject <BDPCDDynamicCardCommonFunctionInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)canOpenURLString:(id)a0;
- (void)trackEventName:(id)a0 params:(id)a1;
- (void)bdpcd_getWithURL:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)bdpcd_postWithURL:(id)a0 params:(id)a1 headerField:(id)a2 completion:(id /* block */)a3;
- (void)bdpcd_postWithURL:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (id)bdpcd_imageNamed:(id)a0;
- (id)toastImageViewWithImageName:(id)a0;
- (id)bdpcd_colorWithHexString:(id)a0 alpha:(double)a1;
- (id)bdpcd_colorWithHexString:(id)a0;
- (id)bdpcd_generalRegularFontOfSize:(double)a0;
- (id)bdpcd_generalMediumFontOfSize:(double)a0;
- (id)bdpcd_generalSemiboldFontOfSize:(double)a0;
- (void)bdpcd_getWithHost:(id)a0 path:(id)a1 params:(id)a2 completion:(id /* block */)a3;
- (void)bdpcd_postWithHost:(id)a0 path:(id)a1 params:(id)a2 completion:(id /* block */)a3;
- (void)bdpcd_postWithHost:(id)a0 path:(id)a1 params:(id)a2 headerField:(id)a3 completion:(id /* block */)a4;
- (void)bdpcd_requestWithRequestModel:(id)a0 completion:(id /* block */)a1;
- (void)bdpcd_setImageWithURLString:(id)a0 imageView:(id)a1;
- (void)bdpcd_setDownsampleImageWithURL:(id)a0 imageView:(id)a1;
- (void)bdpcd_setDownsampleImageWithURL:(id)a0 placeholderImage:(id)a1 imageView:(id)a2;
- (void)bdpcd_setDownsampleImageWithURL:(id)a0 placeholderImage:(id)a1 imageView:(id)a2 completion:(id /* block */)a3;
- (void)requestImageWithURL:(id)a0 completion:(id /* block */)a1;
- (void)bdpcd_imageView:(id)a0 imageFromRemoteNamed:(id)a1;
- (void)dealToastWithActionModel:(id)a0;
- (void)showToastWithContentStr:(id)a0;
- (void)dealDialogWithActionModel:(id)a0 contextDict:(id)a1 completion:(id /* block */)a2;
- (void)playVideoWithActionModel:(id)a0;
- (void)imagePreviewWithImageURlsList:(id)a0 targetIndex:(unsigned long long)a1;
- (void)callTelephoneWithPhoneNumber:(id)a0 callback:(id /* block */)a1;
- (void)reportBtmWithActionModel:(id)a0;
- (void)transferSchema:(id)a0 contextDict:(id)a1;
- (void)copyContentWithActionModel:(id)a0;
- (void)openModifyAddressWithActionModel:(id)a0 callback:(id /* block */)a1;
- (void)openModifyExpTimeWithActionModel:(id)a0 callback:(id /* block */)a1;
- (void)openMoreButtonViewWithTitle:(id)a0 moreButtonLists:(id)a1 completion:(id /* block */)a2;
- (void)replaceEmojiForAttributedString:(id)a0 font:(id)a1;
- (double)bdpcd_widthWithFont:(id)a0 height:(double)a1 str:(id)a2;
- (double)bdpcd_heightWithFont:(id)a0 width:(double)a1 str:(id)a2;
- (struct CGSize { double x0; double x1; })bdpcd_sizeWithFont:(id)a0 width:(double)a1 maxLine:(long long)a2 str:(id)a3;
- (double)messageContentWidth;
- (id)bdpcd_accurateDate;
- (long long)roleType;
- (id)templateCardModleResourceDirectoryPath;
- (id)bdpcd_douyinNumberABCMediumFontOfSize:(double)a0;
- (id)bdpcd_douyinNumberABCRegularFontOfSize:(double)a0;
- (id)templateCardFallbackConfigDict;
- (void)fetchCDNResourceAsyncWithJsonName:(id)a0 completion:(id /* block */)a1;
- (id)bdpcd_containerBackgroundColor;
- (double)bdpcd_cardMainCornerRadius;
- (void)dealDialogWithActionModel:(id)a0 completion:(id /* block */)a1;
- (id)alertActionWithDict:(id)a0;
- (double)serverTimestamp;
- (id)remoteConfig;

@end
