@class UILabel, UITextField, NSString;

@interface GCKeyValueSettingCell : GCBaseCollectionViewCell <UITextFieldDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITextField *textFiled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
