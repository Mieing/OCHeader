@class NSString;

@interface AWELiteActivityToastService : HTSService <AWELiteActivityToastService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)serviceScopeType;
+ (void)showToast:(id)a0 withType:(long long)a1;
+ (void)showTextToast:(id)a0;
+ (void)showImageToast:(id)a0;
+ (void)showImageToastWithModel:(id)a0 completion:(id /* block */)a1;
+ (void)showImageToastWithModel:(id)a0;


@end
