@interface AFDWechatShareGuideUtils : NSObject

+ (BOOL)canShow;
+ (id)confirmTitle;
+ (BOOL)showIfNeedWithConfirmBlock:(id /* block */)a0 enterFrom:(id)a1;
+ (void)trackWechatShareGuideWithParams:(id)a0;
+ (id)showCountRule;
+ (id)imageURL;
+ (id)subTitle;
+ (id)title;
+ (id)cancelTitle;

@end
