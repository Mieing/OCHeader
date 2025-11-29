@class NSString, NSDictionary, UIImage, NSMutableArray;

@interface AWEProfileMediaUtils : NSObject <AWEProfileMediaUtilsProtocol>

@property (retain, nonatomic) UIImage *prePublishAvatar;
@property (retain, nonatomic) NSMutableArray *uploadImages;
@property (retain, nonatomic) NSDictionary *trackInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showAvatarPreviewWithImage:(id)a0 imageURL:(id)a1 userID:(id)a2;
+ (void)selectedImageWithConfig:(id)a0;
+ (void)selectAvatarWithSourceView:(id)a0 selectedBlock:(id /* block */)a1 otherActions:(id)a2 needUpload:(BOOL)a3 completionBlock:(id /* block */)a4;
+ (void)selectAvatar:(id)a0 sender:(id)a1 completionBlock:(id /* block */)a2;
+ (void)submitAvatarWithImage:(id)a0 param:(id)a1 completionBlock:(id /* block */)a2;
+ (BOOL)enableSetVideoPickerTitle;
+ (BOOL)backToImagePickerFromAvatarCrop;
+ (BOOL)isEnterpriseUser;
+ (void)selectAvatar:(id)a0 sender:(id)a1 trackInfo:(id)a2 completionBlock:(id /* block */)a3;
+ (void)selectAvatarWithSourceView:(id)a0 selectedBlock:(id /* block */)a1 otherActions:(id)a2 needUpload:(BOOL)a3 trackInfo:(id)a4 completionBlock:(id /* block */)a5;
+ (void)submitAvatarWithImage:(id)a0 noStickerImage:(id)a1 param:(id)a2 complexCompletionBlock:(id /* block */)a3 enterFrom:(id)a4;
+ (void)showAvatarEditWithConfig:(id)a0 completionBlock:(id /* block */)a1;
+ (void)submitAvatarWithImage:(id)a0 param:(id)a1 completionBlock:(id /* block */)a2 enterFrom:(id)a3;
+ (void)submitAvatarWithImage:(id)a0 param:(id)a1 complexCompletionBlock:(id /* block */)a2 enterFrom:(id)a3;
+ (void)showAvatarPreviewWithImageURL:(id)a0 userID:(id)a1 type:(long long)a2 enterFrom:(id)a3;
+ (id)sharedInstance;

- (void).cxx_destruct;

@end
