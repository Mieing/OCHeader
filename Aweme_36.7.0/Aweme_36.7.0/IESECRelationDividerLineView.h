@class IESECRelationDividerLineConfigModel;

@interface IESECRelationDividerLineView : UIView

@property (readonly, nonatomic) IESECRelationDividerLineConfigModel *model;

- (void)updateColorWithPercent:(double)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupViews;

@end
