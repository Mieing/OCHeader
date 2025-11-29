@class OrderedDictionary;
@protocol MultiRoomContactSelectViewControllerDelegate;

@interface MultiRoomContactSelectViewController : RoomContactSelectViewController {
    OrderedDictionary *m_dicMultiSelect;
}

@property (weak, nonatomic) id<MultiRoomContactSelectViewControllerDelegate> m_delegate;

- (id)init;
- (void)viewDidLoad;
- (void)setArrMultiSelect:(id)a0;
- (void)doClickRightBarButton;
- (void)updateRightBtn;
- (void)makeCell:(id)a0 contact:(id)a1 tableView:(id)a2 indexPath:(id)a3;
- (BOOL)isSelected:(id)a0;
- (void)didSelectContact:(id)a0;
- (void)onCancel:(id)a0;
- (void).cxx_destruct;

@end
