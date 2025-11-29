@class UIImageView;

@interface MultiSelectTableViewCell : UITableViewCell {
    UIImageView *m_selectedImageView;
    BOOL m_bAnimated;
    unsigned int m_iAnimatedCount;
}

@property (readonly, nonatomic) BOOL m_bSelected;
@property (nonatomic) BOOL m_bNeedOffset;
@property (nonatomic) BOOL m_bIsEditting;
@property (nonatomic) BOOL m_bShowSelectedFlag;
@property (nonatomic) BOOL m_bCanSelected;

- (void)adjustSelectFlagFrameInternal;
- (void)changeSelectdStatus:(BOOL)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
