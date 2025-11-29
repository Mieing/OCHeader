@class UIColor, NSString, UIImageView, UILabel, IESGCPPBRankListAdditionalModel;

@interface IESGCPDetailRankListTag : UIControl <IESGCPTagViewProtocol>

@property (retain, nonatomic) UIImageView *rankingBgImage;
@property (retain, nonatomic) UILabel *rankingLabel;
@property (retain, nonatomic) UIImageView *rankNameBgImage;
@property (retain, nonatomic) UILabel *rankNameLabel;
@property (retain, nonatomic) UIImageView *arrowIcon;
@property (retain, nonatomic) IESGCPPBRankListAdditionalModel *rankModel;
@property (nonatomic) double fontSize;
@property (nonatomic) double padding;
@property (retain, nonatomic) UIColor *tagTextColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRankModel:(id)a0;
- (void)tagStyleParamsDidUpdate;
- (void)didClickRankTag;
- (void)setImageWithImageView:(id)a0 url:(id)a1 capInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (void)layoutViews;
- (void).cxx_destruct;
- (void)setupViews;
- (void)updateWithModel:(id)a0;

@end
