@class NSString, MMScrollActionSheet;

@interface MMScrollActionSheetDelegateHelper : NSObject <MMScrollActionSheetDelegate>

@property (weak, nonatomic) MMScrollActionSheet *weakActionSheet;
@property (copy, nonatomic) id /* block */ scrollActionSheetDidSelectItemCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollActionSheet:(id)a0 didSelecteItem:(id)a1;
- (void)scrollActionSheet:(id)a0 didSelecteDisableItem:(id)a1;
- (void)scrollActionSheet:(id)a0 didClickUrl:(id)a1;
- (void)scrollActionSheetDidClickTop:(id)a0;
- (void)scrollActionSheetDidClickTopPrivacy:(id)a0;
- (void)scrollActionSheetDidAppeared:(id)a0;
- (void)scrollActionSheetDidCancel:(id)a0;
- (BOOL)scrollActionSheetShouldCancel:(id)a0;
- (void)scrollActionSheetDidTapTransparent:(id)a0;
- (void)scrollActionSheetDidScroll:(id)a0;
- (void)scrollActionSheetWillDismiss:(id)a0;
- (void)scrollActionSheet:(id)a0 clickCustomBtn:(id)a1;
- (void).cxx_destruct;

@end
