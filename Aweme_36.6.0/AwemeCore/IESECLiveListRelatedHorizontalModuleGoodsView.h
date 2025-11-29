@class NSString, UIImageView, IESECLiveGoodsModel, UILabel, IESECLiveContext;

@interface IESECLiveListRelatedHorizontalModuleGoodsView : UIView

@property (retain, nonatomic) UIImageView *goodsImageView;
@property (retain, nonatomic) UILabel *goodsTitleLabel;
@property (copy, nonatomic) NSString *jumpURL;
@property (nonatomic) long long index;
@property (retain, nonatomic) IESECLiveGoodsModel *model;
@property (copy, nonatomic) id /* block */ clickedBlock;
@property (weak, nonatomic) IESECLiveContext *liveContext;

- (void)addGestureRecognizer;
- (id)initWithClickedBlock:(id /* block */)a0;
- (void)updateWithModel:(id)a0 index:(long long)a1 liveContext:(id)a2;
- (void).cxx_destruct;
- (void)setupUI;

@end
