@class NSString, NSAttributedString, NSIndexPath;

@interface IESIMContactPickerPublicGroupInviteContentCellModel : IESIMContactPickerContentCellModel_rightButton <IESIMContactPickerContentCellModelProtocol>

@property (nonatomic) BOOL isGroupMember;
@property (readonly, copy, nonatomic) NSString *cellReuseIdentifier;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) id /* block */ didSelectBlock;
@property (copy, nonatomic) id /* block */ didClickRightButtonBlock;
@property (nonatomic) BOOL disableSelect;
@property (readonly, nonatomic) BOOL isSelected;
@property (retain, nonatomic) NSAttributedString *middleDescAttr;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (retain, nonatomic) id rawData;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getButtonNormalTitle;
+ (id)getButtonSelectTitle;

- (void)updateSelected:(BOOL)a0;

@end
