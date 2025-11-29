@class UILabel, UIView;

@interface LSIMMessageSystemCellView : LSIMChatDetailBaseCellView

@property (retain, nonatomic) UILabel *systemLabel;
@property (retain, nonatomic) UIView *bgView;

- (void)configWithCellVM:(id)a0;
- (void)setupContainerView;
- (void).cxx_destruct;

@end
