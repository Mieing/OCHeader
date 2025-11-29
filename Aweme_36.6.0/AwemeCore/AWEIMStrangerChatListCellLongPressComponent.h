@class NSString, UIView;
@protocol IESIMPopoverActionSheetProtocol;

@interface AWEIMStrangerChatListCellLongPressComponent : AWEIMComponentBase <AWEIMCommonChatListCellLongPressInterface, AWEIMComponentLazyCreate>

@property (retain, nonatomic) UIView<IESIMPopoverActionSheetProtocol> *popoverActionSheet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lazyComponentWakeupInterface;

- (void)componentDidMounted:(id)a0;
- (void)didLongPressTableViewCell:(id)a0 indexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2 chat:(id)a3;
- (void)deleteChat:(id)a0 indexPath:(id)a1;
- (id)generatePopOverWithChat:(id)a0 indexPath:(id)a1;
- (void)showPopOver:(id)a0 inCell:(id)a1 indexPath:(id)a2 point:(struct CGPoint { double x0; double x1; })a3 chat:(id)a4;
- (void).cxx_destruct;

@end
