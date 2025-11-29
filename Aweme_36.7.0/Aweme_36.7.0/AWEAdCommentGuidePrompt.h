@class NSString;

@interface AWEAdCommentGuidePrompt : NSObject <AWEAdCommentGuidePrompt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showCommentGuidePrompt:(id)a0 showVC:(id)a1;
+ (id)showPrompt:(id)a0 actionBlock:(id /* block */)a1 cancelBlock:(id /* block */)a2;
+ (void)trackWithAweme:(id)a0 label:(id)a1 refer:(id)a2;
+ (void)setupCommentPromptTime:(id)a0 showVC:(id)a1;
+ (void)dismissBottomNotification:(id)a0;


@end
