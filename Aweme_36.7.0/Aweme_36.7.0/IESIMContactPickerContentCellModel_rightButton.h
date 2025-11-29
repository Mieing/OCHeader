@class UIFont, NSString, NSArray, UIColor, NSAttributedString, NSIndexPath;

@interface IESIMContactPickerContentCellModel_rightButton : IESIMContactPickerContentCellModel <IESIMContactPickerContentCellModelProtocol>

@property (nonatomic) BOOL isButtonDisable;
@property (copy, nonatomic) NSString *buttonNormalTitle;
@property (copy, nonatomic) NSArray *tags;
@property (nonatomic) struct CGSize { double width; double height; } buttonSize;
@property (retain, nonatomic) UIFont *buttonTitleFont;
@property (retain, nonatomic) UIColor *buttonTitleColor;
@property (retain, nonatomic) UIColor *buttonBackgroundColor;
@property (nonatomic) BOOL ignoreButtonDisableState;
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

- (void)updateSelected:(BOOL)a0;
- (void).cxx_destruct;

@end
