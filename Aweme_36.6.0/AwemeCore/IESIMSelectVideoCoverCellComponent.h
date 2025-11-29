@class NSString, NSIndexPath;
@protocol AWEIMMessageTableViewInterface;

@interface IESIMSelectVideoCoverCellComponent : AWEIMComponentBase <IESIMSelectVideoCoverCellService, IESIMMessageListLifeCycleAction>

@property (weak, nonatomic) id<AWEIMMessageTableViewInterface> tableViewService;
@property (retain, nonatomic) NSIndexPath *selectVideoCoverCellIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)setSelectVideoCoverCellIndexPathWithCell:(id)a0;
- (void)msgList_viewDidAppear;
- (void).cxx_destruct;

@end
