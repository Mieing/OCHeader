@class UIImageView, UILabel, IESLLPOITempoPOIRankTagModel;

@interface IESLLPOITempoPOIStatsRankTagView : IESLLPOITempoPOIBaseTagView

@property (retain, nonatomic) UIImageView *rankIcon;
@property (retain, nonatomic) UILabel *rankText;
@property (retain, nonatomic) UIImageView *arrowIcon;
@property (retain, nonatomic) IESLLPOITempoPOIRankTagModel *model;
@property (nonatomic) long long tagsRowHeight;

- (void)makeConstrains;
- (void)configWithRankModel:(id)a0 tagsRowHeight:(long long)a1;
- (void).cxx_destruct;
- (void)setupUI;

@end
