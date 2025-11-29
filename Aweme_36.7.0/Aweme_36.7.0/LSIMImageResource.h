@interface LSIMImageResource : NSObject

+ (id)imPhotoPlaceholderImage;
+ (void)setGeckoImageWithImageName:(id)a0 imageView:(id)a1;
+ (void)setUserAvatarURL:(id)a0 isMerchant:(BOOL)a1 withImageView:(id)a2;
+ (void)setGroupChatAvatarURL:(id)a0 withImageView:(id)a1;
+ (void)setNetworkImageWithURL:(id)a0 geckoPlaceholder:(id)a1 button:(id)a2 state:(unsigned long long)a3 completion:(id /* block */)a4;
+ (void)setMerchantAvatarURL:(id)a0 withImageView:(id)a1;
+ (void)setPlatformAvatarURL:(id)a0 withImageView:(id)a1;
+ (void)setGeckoImageWithImageName:(id)a0 imageView:(id)a1 completion:(id /* block */)a2;
+ (void)setNetworkImageWithURL:(id)a0 geckoPlaceholder:(id)a1 imageView:(id)a2;
+ (id)imUserPlaceholderImage;
+ (void)setNetworkImageWithURL:(id)a0 geckoPlaceholder:(id)a1 button:(id)a2 state:(unsigned long long)a3;

@end
