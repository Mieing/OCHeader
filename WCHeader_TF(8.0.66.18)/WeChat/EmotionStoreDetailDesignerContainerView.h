@class MMWebImageView, UILabel, MMUIActivityIndicatorView, UIView, PersonalDesigner, EmotionActivity;

@interface EmotionStoreDetailDesignerContainerView : EmoticonCellLikeButton {
    UIView *m_contentView;
    MMWebImageView *m_designerHeaderView;
    UILabel *m_designerNameLabel;
    UILabel *m_designerPageLabel;
    MMUIActivityIndicatorView *m_loadingView;
    UIView *m_lineInTop;
    UIView *m_lineInBottom;
}

@property (retain, nonatomic) PersonalDesigner *personalDesigner;
@property (retain, nonatomic) EmotionActivity *emotionActivity;

+ (id)lineView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (void)setDesignerHeaderSideLen:(double)a0;
- (void)setIsShowLineInTop:(BOOL)a0 IsShowLineInBottom:(BOOL)a1;
- (void)setContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)startLoading;
- (void)stopLoading;
- (void).cxx_destruct;

@end
