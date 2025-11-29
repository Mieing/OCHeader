@interface AWECommentTool : NSObject

+ (BOOL)canReplyCommentWithModel:(id)a0 failReasonCallBack:(id /* block */)a1;
+ (id)inputViewPlaceholderWithAwemeModel:(id)a0;
+ (id)getPermissionStatusTextWithAwemeModel:(id)a0;
+ (id)clientInputViewDefaultPlaceholder;
+ (id)serverInputViewPlaceholderWithAwemeModel:(id)a0;

@end
