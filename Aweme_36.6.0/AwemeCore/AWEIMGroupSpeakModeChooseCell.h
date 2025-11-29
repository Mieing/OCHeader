@class UIStackView, AWEIMGroupSpeakModeAssignItemViewModel, NSString, AWEIMGroupSpeakPermissionCellModel, AWEIMGroupSpeakModeViewModel, AWEIMGroupSpeakModeItemViewModel;
@protocol IESIMConversationProtocol;

@interface AWEIMGroupSpeakModeChooseCell : UICollectionViewCell <AWEIMGroupSpeakPermissionCellProtocol>

@property (retain, nonatomic) id<IESIMConversationProtocol> conversation;
@property (retain, nonatomic) AWEIMGroupSpeakModeViewModel *viewModel;
@property (retain, nonatomic) AWEIMGroupSpeakPermissionCellModel *cellModel;
@property (retain, nonatomic) UIStackView *contentStackView;
@property (retain, nonatomic) AWEIMGroupSpeakModeItemViewModel *allMembers;
@property (retain, nonatomic) AWEIMGroupSpeakModeItemViewModel *ownerAndAdmin;
@property (retain, nonatomic) AWEIMGroupSpeakModeAssignItemViewModel *assignViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)createComponents;
- (void)renderWithCellModel:(id)a0;
- (void)__refreshSpeakModeCellSelectState;
- (id)__assignSpeakModeTitle;
- (void)__handleDidTapViewWithMode:(long long)a0;
- (void)addBottomLineToContentViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutComponents;

@end
