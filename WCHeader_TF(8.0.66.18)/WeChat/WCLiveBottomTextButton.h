@class NSString, MMUILabel;

@interface WCLiveBottomTextButton : WCLiveBlurButton

@property (nonatomic) double bottomLabelOffsetY;
@property (nonatomic) double bottomSubLabelOffsetY;
@property (nonatomic) unsigned long long buttonTextLocation;
@property (retain, nonatomic) MMUILabel *m_bottomDescriptionLabel;
@property (retain, nonatomic) NSString *m_bottomDescription;
@property (retain, nonatomic) MMUILabel *m_bottomSubDescriptionLabel;
@property (retain, nonatomic) NSString *m_bottomSubDescription;
@property (nonatomic) BOOL bBottomDescLabelNoLimitedWidth;
@property (nonatomic) BOOL hideDescLabel;
@property (nonatomic) BOOL hideSubDescLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 blurEffectColor:(id)a1 roundCorner:(BOOL)a2;
- (void)updateTextLocation:(BOOL)a0;
- (void)layoutSubviews;
- (void)layoutBottomDescriptionLabel;
- (void)layoutBottomSubDescriptionLabel;
- (void)setBottomTextColor:(id)a0;
- (void)updateOffsetY:(double)a0;
- (void)updateBottomSubLabelOffsetY:(double)a0;
- (void)setBottomDescription:(id)a0 withOffetY:(double)a1;
- (void)setBottomSubDescription:(id)a0 withOffetY:(double)a1;
- (id)getBottomDescriptionLabel;
- (void).cxx_destruct;

@end
