@class NSString;

@interface WCShareItemUtils : NSObject <SKStoreProductViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)onPasteboardChanged;
+ (void)initialize;
+ (BOOL)isOpenMultiMsgShare:(id)a0;
+ (BOOL)isOpenMultiMsgForwardYuanbao;
+ (BOOL)isOpenMultiMsgForwardYuanbaoH5;
+ (BOOL)isEncodeNickNameClose;
+ (void)jumpToYuanbaoWithMsgWraps:(id)a0 scene:(long long)a1 params:(id)a2 completionHandler:(id /* block */)a3;
+ (void)jumpToYuanbaoWithContent:(id)a0 scene:(long long)a1 params:(id)a2;
+ (void)jumpToYuanbaoWithFileName:(id)a0 filePath:(id)a1 scene:(long long)a2 params:(id)a3;
+ (id)serializeItems:(id)a0;
+ (id)getSourceTypeWithScene:(long long)a0;
+ (id)getMagicAdPosIdWithScene:(long long)a0;
+ (void)jumpToYuanbaoWithScene:(long long)a0 objects:(id)a1 params:(id)a2 completionHandler:(id /* block */)a3;


@end
