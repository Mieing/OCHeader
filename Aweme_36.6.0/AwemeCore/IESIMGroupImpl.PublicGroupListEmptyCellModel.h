@class NSString, NSAttributedString, NSIndexPath;

@interface IESIMGroupImpl.PublicGroupListEmptyCellModel : NSObject <IESIMContactPickerContentCellModelProtocol> {
    void /* function */ cellReuseIdentifier;
    void /* function */ identifier;
    void /* function */ didSelectBlock;
    void /* function */ didClickRightButtonBlock;
    void /* function */ indexPath;
    void /* function */ rawData;
    void /* function */ name;
    void /* unknown type, empty encoding */ customView;
}

@property (nonatomic, copy) NSString *cellReuseIdentifier;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) id /* block */ didSelectBlock;
@property (nonatomic, copy) id /* block */ didClickRightButtonBlock;
@property (nonatomic) BOOL disableSelect;
@property (nonatomic) BOOL isSelected;
@property (nonatomic, retain) NSAttributedString *middleDescAttr;
@property (nonatomic, copy) NSIndexPath *indexPath;
@property (nonatomic, copy) id rawData;
@property (nonatomic, copy) NSString *name;

- (double)heightForCell;
- (void).cxx_destruct;
- (id)init;
- (void)updateBackgroundColor:(id)a0;

@end
