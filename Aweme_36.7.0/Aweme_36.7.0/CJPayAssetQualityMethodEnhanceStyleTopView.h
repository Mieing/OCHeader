@class UIImageView, CJPayAssetSelectPageGroupEnhanceInfo;

@interface CJPayAssetQualityMethodEnhanceStyleTopView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *titleImageView;
@property (retain, nonatomic) UIImageView *tipsImageView;
@property (retain, nonatomic) CJPayAssetSelectPageGroupEnhanceInfo *groupEnhanceInfo;
@property (copy, nonatomic) id /* block */ clickTipsBlock;

- (void)p_clickTips;
- (void)updateWithGroupEnhanceInfo:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
