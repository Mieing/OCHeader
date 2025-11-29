@class NSString;

@interface IESECShareServiceImpl : NSObject <IESECShareService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)saveImageToAlbum:(id)a0 completion:(id /* block */)a1;
+ (void)fetchQRCodeImageWithType:(unsigned long long)a0 itemID:(id)a1 extraInfo:(id)a2 useRebrandStyle:(BOOL)a3 activityInfo:(id)a4 shareScene:(id)a5 completion:(id /* block */)a6;
+ (void)openSharePanelToShareImage:(id)a0;
+ (void)fetchTranspondFirstPersonHeadImage:(id /* block */)a0;
+ (void)openSharePanelToShareImage:(id)a0 params:(id)a1;
+ (void)appJumpWithOpenUrl:(id)a0;


@end
