@class ACCStickerGeometryModel, NSString, ACCStickerConfig, ACCStickerTimeRangeModel, UIView, NSNumber;
@protocol ACCStickerContentProtocol, ACCStickerContainerProtocol;

@interface ACCBaseStickerView : UIView <ACCStickerCopyingProtocol, ACCStickerProtocol>

@property (nonatomic) BOOL isAngleAdsorbing;
@property (copy, nonatomic) NSString *associationId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id hierarchyId;
@property (weak, nonatomic) UIView<ACCStickerContentProtocol> *contentView;
@property (retain, nonatomic) UIView *selectedHintView;
@property (readonly, nonatomic) ACCStickerConfig *config;
@property (readonly, nonatomic) BOOL isSelected;
@property (nonatomic) BOOL foreverHidden;
@property (nonatomic) BOOL abilitySticker;
@property (weak, nonatomic) id<ACCStickerContainerProtocol> stickerContainer;
@property (readonly, nonatomic) NSNumber *groupId;
@property (copy, nonatomic) NSString *stickerId;
@property (readonly, nonatomic) ACCStickerGeometryModel *stickerGeometry;
@property (readonly, nonatomic) ACCStickerTimeRangeModel *stickerTimeRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double realStartTime;
@property (nonatomic) double realDuration;
@property (nonatomic) double finalStartTime;
@property (nonatomic) double finalDuration;

- (id)initWithContentView:(id)a0 config:(id)a1;
- (void)recoverWithGeometryModel:(id)a0;
- (void)resizeWithContainerViewWithGeometryModel:(id)a0;
- (void)revertWithContainerView;
- (id)interactiveStickerGeometryWithCenterInPlayer:(struct CGPoint { double x0; double x1; })a0 interactiveBoundsSize:(struct CGSize { double x0; double x1; })a1;
- (void)hideSelectedView;
- (void)showSelectedView;
- (void)hideBorderView;
- (void)showSelectedViewPure;
- (void)hideSelectedViewPure;
- (void)showBorderView;
- (void)recoverWithTimeRangeModel:(id)a0;
- (void)updateWithCurrentPlayerTime:(double)a0;
- (id)copyForContext:(id)a0;
- (void)updateWithInstance:(id)a0 context:(id)a1;
- (id)bizStickerConfig;
- (void)doDeselect;
- (BOOL)shouldLimitedAreaWithPan;
- (void)shouldHiddenSelectedHintView:(BOOL)a0;
- (void)doSelect;
- (void)updateSelectedHintViewFrame;
- (void)recordStickerLocation;
- (void)updateContentScaleIfNeeded;
- (void)updateTimeRange;
- (id)copy;
- (void).cxx_destruct;
- (void)removeFromSuperview;
- (void)select;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isEqual:(id)a0;
- (void)setTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)deselect;

@end
