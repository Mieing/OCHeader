@class UILabel, UIButton, NSString;
@protocol ACCTagsCustomizeTableViewCellDelegate;

@interface ACCTagsCustomizeTableViewCell : UITableViewCell <ACCTagsItemPickerTableViewCellProtocol>

@property (retain, nonatomic) UILabel *tagNameLabel;
@property (retain, nonatomic) UIButton *removeButton;
@property (weak, nonatomic) id<ACCTagsCustomizeTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
