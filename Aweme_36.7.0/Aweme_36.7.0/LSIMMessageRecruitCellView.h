@class YYLabel, UIStackView, UIImageView, UIView, UILabel, LSIMMessageCardRecruitCellVM;

@interface LSIMMessageRecruitCellView : LSIMChatDetailBaseCellView

@property (retain, nonatomic) LSIMMessageCardRecruitCellVM *cellVM;
@property (retain, nonatomic) UIView *cardView;
@property (retain, nonatomic) UIImageView *mainImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) YYLabel *tagLabel;
@property (retain, nonatomic) UIStackView *detailStackView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *leftDetailLabel;
@property (retain, nonatomic) UIView *separtorView;
@property (retain, nonatomic) UILabel *rightDetailLabel;

- (void)configWithCellVM:(id)a0;
- (void)handleContainerTapGesture:(id)a0;
- (void)setupContainerView;
- (void).cxx_destruct;

@end
