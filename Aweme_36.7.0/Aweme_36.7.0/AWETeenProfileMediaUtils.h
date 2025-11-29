@interface AWETeenProfileMediaUtils : NSObject

+ (void)showAvatarPreviewWithImage:(id)a0 imageURL:(id)a1 userID:(id)a2;
+ (void)selectAvatarWithSourceView:(id)a0 selectedBlock:(id /* block */)a1 otherActions:(id)a2 needUpload:(BOOL)a3 completionBlock:(id /* block */)a4;
+ (BOOL)useCreativeAlbumKit;
+ (void)selectAvatar:(id)a0 sender:(id)a1 completionBlock:(id /* block */)a2;
+ (void)submitAvatarWithImage:(id)a0 param:(id)a1 completionBlock:(id /* block */)a2;
+ (BOOL)enableSetVideoPickerTitle;

@end
