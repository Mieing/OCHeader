@class NSString;

@interface ACCScanJumpSearchPageContext : NSObject <ACCScanJumpSearchPageContextStudioProxy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)openSearchPageWithParam:(id)a0 publishViewModel:(id)a1 supportPublish:(BOOL)a2 trackParams:(id)a3;
+ (id)editPageClickStickerBasicABParams;
+ (id)historyPageBasicParams;
+ (id)scanAutoOpenSearchBasicParams;
+ (id)scanHandleClickSearchBasicParams;
+ (id)scanTakePhotoBasicParams;
+ (id)albumSelectPhotoBasicParams;
+ (id)feedVideoStickerClickBasicParams;


@end
