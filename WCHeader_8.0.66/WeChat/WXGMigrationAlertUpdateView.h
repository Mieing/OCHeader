@class NSString;
@protocol WXGMigrationAlertUpdateViewDelegate;

@interface WXGMigrationAlertUpdateView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) NSString *tipString;
@property (retain, nonatomic) NSString *titleString;
@property (weak, nonatomic) id<WXGMigrationAlertUpdateViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIsBackup:(BOOL)a0;
- (void)setupDetailView;
- (id)titleForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (id)colorForPageSheetConfirmButton;
- (double)bottomViewBottomMargin;
- (void)onClickPageSheetConfirmButton;
- (void).cxx_destruct;

@end
