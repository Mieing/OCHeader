@class NSString;

@interface AWEFavoriteChainActions : NSObject <AWEFavoriteChainActionsManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)promise_showFavoriteSnackBar:(id)a0 snackBarType:(unsigned long long)a1 snackBarTitleString:(id)a2;
- (id)promise_showFavoriteAddNewFilePopup:(id)a0;
- (id)generateSnackBarWithType:(unsigned long long)a0 snackBarTitleString:(id)a1;
- (id)promise_showFavoriteAddToFilePopup:(id)a0 shouldShowSeeLaterLabel:(BOOL)a1;
- (void)startAtSnackBarWithConfig:(id)a0;
- (void)startAtAddToFildeWithEnterFrom:(id)a0 itemID:(id)a1 authorID:(id)a2 coverUrl:(id)a3 extraParams:(id)a4;
- (void)startAtAddToFildeWithConfig:(id)a0 networkCompletion:(id /* block */)a1;

@end
