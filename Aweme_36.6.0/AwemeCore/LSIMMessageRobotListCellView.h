@class UILabel, NSMutableArray, UIView;
@protocol LSIMMessageRobotListCellVM;

@interface LSIMMessageRobotListCellView : LSIMChatDetailBaseCellView

@property (retain, nonatomic) UIView *cardView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *seperatorView;
@property (retain, nonatomic) NSMutableArray *cellContainerList;
@property (retain, nonatomic) id<LSIMMessageRobotListCellVM> cellVM;

- (void)configWithCellVM:(id)a0;
- (id)createContentLabel;
- (id)createCellContainerWithLabel:(id)a0;
- (void)contentLabelDidTapped:(id)a0;
- (void)setupContainerView;
- (void).cxx_destruct;

@end
