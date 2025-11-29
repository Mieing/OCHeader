@class NSString;

@interface AWEECOMIMResourceService : HTSService <AWEECOMIMResourceService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ecomim_imageNamed:(id)a0;
+ (id)ecomim_offlineImageNamed:(id)a0;
+ (void)ecomim_imageView:(id)a0 offlineImageNamed:(id)a1;
+ (void)ecomim_button:(id)a0 setOfflineImageNamed:(id)a1 forState:(unsigned long long)a2;
+ (void)ecomim_button:(id)a0 setOfflineBackgroundImageNamed:(id)a1 forState:(unsigned long long)a2;
+ (void)ecomim_imageView:(id)a0 offlineImageNamed:(id)a1 theme:(long long)a2;
+ (void)ecomim_button:(id)a0 setOfflineImageNamed:(id)a1 forState:(unsigned long long)a2 theme:(long long)a3;
+ (void)ecomim_button:(id)a0 setOfflineBackgroundImageNamed:(id)a1 forState:(unsigned long long)a2 theme:(long long)a3;


@end
