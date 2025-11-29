@class NSString, NSMutableArray, UITextField;

@interface ScanLicenceBankCardEditView : UIView <UITextFieldDelegate> {
    NSMutableArray *_arrTextField;
    UITextField *bankSequenceField;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
