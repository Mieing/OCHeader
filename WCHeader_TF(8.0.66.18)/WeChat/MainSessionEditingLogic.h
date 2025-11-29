@class NSString, UITableView;
@protocol MainSessionEditingLogicDelegate;

@interface MainSessionEditingLogic : NSObject <WCActionSheetDelegate, IWCDeviceBrandMgrExt>

@property (retain, nonatomic) NSString *confirmingSessionName;
@property (weak, nonatomic) UITableView *tableView;
@property (weak, nonatomic) id<MainSessionEditingLogicDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showDeleteAndHideSessionGuide;

- (void)handleEditing:(long long)a0 forTableView:(id)a1 atIndexPath:(id)a2;
- (void)handleCommitDelete:(id)a0 atTableView:(id)a1;
- (void)handleBrandUnsubscribeAtIndexPath:(id)a0;
- (void)onConfirmDeleteSessionAtIndex:(id)a0;
- (void)deleteSessionAtIndexPath:(id)a0;
- (void)handleBrandUnsubscribe:(id)a0;
- (void)handleHideSession:(id)a0 atCell:(id)a1;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)onWCDeviceUnbindEnd:(id)a0 Error:(id)a1;
- (void)onArriveFundConfirmDeleteSession:(id)a0;
- (void)onArriveFundCancelDeleteSession:(id)a0;
- (void).cxx_destruct;

@end
