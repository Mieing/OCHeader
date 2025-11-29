@class NSString, UIView, NSIndexPath, NSAttributedString;

@interface IESIMContactPickerCustomContentCellModel : NSObject <IESIMContactPickerContentCellModelProtocol>

@property (readonly, nonatomic) UIView *customView;
@property (readonly, copy, nonatomic) NSString *cellReuseIdentifier;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (retain, nonatomic) id rawData;
@property (copy, nonatomic) id /* block */ didSelectBlock;
@property (copy, nonatomic) id /* block */ didClickRightButtonBlock;
@property (nonatomic) BOOL disableSelect;
@property (readonly, nonatomic) BOOL isSelected;
@property (retain, nonatomic) NSAttributedString *middleDescAttr;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
