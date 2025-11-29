@class DUXActionSheet;

@interface LSIMActionSheetWrapper : LSIMAlertControllerWrapper

@property (retain, nonatomic) DUXActionSheet *alert;

- (id)createActionSheet;
- (void)dismiss;
- (void).cxx_destruct;
- (void)showOnViewController:(id)a0;

@end
