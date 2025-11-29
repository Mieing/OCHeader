@class UIImageView, EmoticonCustomManageView, EmoticonCustomManageWrap;

@interface EmoticonCustomManageCell : UICollectionViewCell

@property (retain, nonatomic) EmoticonCustomManageWrap *emoticonWrap;
@property (retain, nonatomic) EmoticonCustomManageView *manageView;
@property (retain, nonatomic) UIImageView *syncingImg;
@property (nonatomic) double currentWidth;
@property (nonatomic) BOOL isScaled;
@property (nonatomic) BOOL shouldShowDvider;

- (void)updateEmoticonWrap:(id)a0 delegate:(id)a1 edge:(double)a2;
- (void)updateLayoutWithEmoticonWrap:(id)a0;
- (id)showingEmoticonMd5;
- (void)doFlashAnimation;
- (void)prepareForReuse;
- (void)applyLayoutAttributes:(id)a0;
- (void)updateLayoutForAttr;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
