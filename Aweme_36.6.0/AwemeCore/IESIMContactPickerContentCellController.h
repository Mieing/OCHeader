@class NSString, NSArray, IESIMContactPickerComponentContext, IESIMContactPickerCellContext;

@interface IESIMContactPickerContentCellController : NSObject <IESIMContactPickerContentCellControllerProtocol>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *cellReuseIdentifier;
@property (retain, nonatomic) NSArray *leftComponents;
@property (retain, nonatomic) NSArray *rightComponents;
@property (retain, nonatomic) NSArray *firstLineComponents;
@property (retain, nonatomic) NSArray *secondLineComponents;
@property (retain, nonatomic) NSArray *thirdLineComponents;
@property (nonatomic) BOOL isCellStyleBottomHorizontalLine;
@property (nonatomic) BOOL disableSelect;
@property (weak, nonatomic) IESIMContactPickerComponentContext *componentContext;
@property (retain, nonatomic) IESIMContactPickerCellContext *cellContext;
@property (copy, nonatomic) id /* block */ cellWillDisaplayHandler;
@property (copy, nonatomic) id /* block */ asyncUpdateDataHandler;
@property (nonatomic) long long cellStackAlignment;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } containerInsets;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } rightContainerInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(id)a0 cellReuseIdentifier:(id)a1;
- (void)willDisplayAtIndexPath:(id)a0;
- (void)createComponents;
- (void)didEndDisplay;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
