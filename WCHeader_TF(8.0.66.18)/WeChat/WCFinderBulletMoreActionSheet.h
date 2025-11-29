@class WCFinderBulletMoreActionSheetParams;

@interface WCFinderBulletMoreActionSheet : WCUIActionSheet

@property (retain, nonatomic) WCFinderBulletMoreActionSheetParams *params;
@property (nonatomic) unsigned long long action;

+ (id)sheetWithParams:(id)a0;
+ (void)_reportEvent:(id)a0 action:(unsigned long long)a1 params:(id)a2;

- (void)showInView:(id)a0;
- (void)_addButtonWithTitle:(id)a0 actionBlock:(id /* block */)a1 action:(unsigned long long)a2 params:(id)a3;
- (void).cxx_destruct;

@end
