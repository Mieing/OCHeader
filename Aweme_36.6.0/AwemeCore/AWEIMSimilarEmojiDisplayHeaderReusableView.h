@class UILabel, AWEIMSimilarEmoticonLayerView;

@interface AWEIMSimilarEmojiDisplayHeaderReusableView : UICollectionReusableView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEIMSimilarEmoticonLayerView *leftLineView;
@property (retain, nonatomic) AWEIMSimilarEmoticonLayerView *rightLineView;

- (void)addAutoLayout;
- (void)addHotReloadColor;
- (void)updateSimilarEmoticonTitleWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)startColor;
- (id)endColor;

@end
