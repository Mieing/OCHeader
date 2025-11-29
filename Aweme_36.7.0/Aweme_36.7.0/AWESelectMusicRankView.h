@class NSString, UIImageView, AWEMusicChartRankModel, UILabel;

@interface AWESelectMusicRankView : UIView <AWESelectMusicRankViewProtocol>

@property (retain, nonatomic) UIImageView *rankImageView;
@property (retain, nonatomic) UILabel *rankLabel;
@property (retain, nonatomic) UILabel *rankShadowLabel;
@property (retain, nonatomic) UILabel *desLabel;
@property (retain, nonatomic) UILabel *entranceLabel;
@property (retain, nonatomic) UIImageView *entranceImageView;
@property (retain, nonatomic) AWEMusicChartRankModel *rankModel;
@property (copy, nonatomic) id /* block */ rankClickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enterChart:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setup;
- (void)configureWithModel:(id)a0;

@end
