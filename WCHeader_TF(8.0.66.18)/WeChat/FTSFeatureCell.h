@class MMBrandHeadImageView, AttributeLabel, FTSFeatureItem, SearchMatchTip;

@interface FTSFeatureCell : MMTableViewCell {
    SearchMatchTip *_matchTip;
    MMBrandHeadImageView *_thumbImageView;
    AttributeLabel *_titleLabel;
    AttributeLabel *_detailLabel;
    BOOL _bAsTopHit;
}

@property (readonly, nonatomic) FTSFeatureItem *featureItem;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initView;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)updateStatus:(BOOL)a0;
- (void)updateFeatureItem:(id)a0 matchTip:(id)a1;
- (void)updateFeatureItem:(id)a0 matchTip:(id)a1 asTopHit:(BOOL)a2;
- (void)layoutSubviews;
- (id)getTopHitDescrpition;
- (void).cxx_destruct;

@end
