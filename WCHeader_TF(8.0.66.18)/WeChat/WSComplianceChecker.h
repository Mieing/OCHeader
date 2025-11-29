@interface WSComplianceChecker : NSObject

+ (void)ReportPopupWindowForInteraction:(unsigned long long)a0 scene:(unsigned long long)a1 action:(unsigned long long)a2;

- (void)requestAuthorizationForInteraction:(unsigned long long)a0 scene:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)storageKeyForInteraction:(unsigned long long)a0;
- (BOOL)isAuthorizdForInteraction:(unsigned long long)a0;
- (id)genDialogWowHaokanGrantNew:(unsigned long long)a0;
- (id)genDialogCommentHaokanGrantNew:(unsigned long long)a0;
- (id)genDialogForInteraction:(unsigned long long)a0 scene:(unsigned long long)a1;

@end
