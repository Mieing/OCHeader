@interface AWEIMCommentShareSecitonControllerHelper : NSObject

+ (id)filterTranspondIMShareModelListIfNeeded:(id)a0;
+ (void)getNewInteractiveFriendsDataWithViewModel:(id)a0 awemeModel:(id)a1 completion:(id /* block */)a2;
+ (void)p_trackerLogWithComemntShareMessage:(id)a0 shareModel:(id)a1 commentModel:(id)a2;
+ (void)getInteractiveFriendsDataWithViewModel:(id)a0 awemeModel:(id)a1 completion:(id /* block */)a2;
+ (void)doMultiSelectShareActionWithSelectList:(id)a0 viewModel:(id)a1 inputText:(id)a2 needCreateGroup:(BOOL)a3 completion:(id /* block */)a4;
+ (void)doShareAction:(id)a0 canShowLightVibrate:(BOOL)a1 completion:(id /* block */)a2;
+ (void)closeCommentMenuWithCompletion:(id /* block */)a0;
+ (BOOL)p_commentAvailiable:(id)a0;

@end
