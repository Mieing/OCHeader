@class MASConstraint;

@interface AWELiveVSCacheVideoCell : IESLivePlaybackCacheBaseCell

@property (retain, nonatomic) MASConstraint *titleLabelHeight;

- (void)p_commonExtraInit;
- (void)setCellModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
