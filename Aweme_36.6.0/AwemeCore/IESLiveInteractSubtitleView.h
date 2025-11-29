@class IESLiveInteractSubtitleSingleUserView, UIView, NSString, IESLiveInteractSubtitleConfig, IESLiveInteractSubtitleBorderView, CAShapeLayer, UIImageView, NSDictionary, UILabel, IESLiveInteractSubtitleNormalView;
@protocol IESHYContainerProtocol;

@interface IESLiveInteractSubtitleView : UIControl <IESHYHybridViewLifecycleProtocol>

@property (retain, nonatomic) IESLiveInteractSubtitleNormalView *normalView;
@property (retain, nonatomic) IESLiveInteractSubtitleSingleUserView *singleUserView;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *lynxView;
@property (weak, nonatomic) UIView *parentView;
@property (retain, nonatomic) UIImageView *deleteIconView;
@property (retain, nonatomic) UILabel *deleteLabelView;
@property (retain, nonatomic) UIView *topGrayView;
@property (retain, nonatomic) UIView *bottomGrayView;
@property (retain, nonatomic) IESLiveInteractSubtitleBorderView *borderView;
@property (retain, nonatomic) CAShapeLayer *dottedLineBorder;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (weak, nonatomic) IESLiveInteractSubtitleConfig *config;
@property (nonatomic) BOOL isFeed;
@property (nonatomic) BOOL centerDidChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateUsers:(id)a0;
- (struct CGPoint { double x0; double x1; })checkPosition:(struct CGPoint { double x0; double x1; })a0 editMode:(BOOL)a1;
- (void)enterEditStyle;
- (void)exitEditStyle;
- (void)deleteSubtitleView;
- (id)initWithViewModel:(id)a0 isFeed:(BOOL)a1 config:(id)a2;
- (void)showWithNodeWithParentView:(id)a0;
- (void)needUpdatePosition;
- (void)setDictForTrack:(id)a0;
- (void)setupViews:(BOOL)a0;
- (void)removeEventLynxView;
- (void)insertEventLynxView;
- (void)setupSubtitle;
- (void)dragAction:(id)a0;
- (void)loadLynxSubtitle;
- (struct CGPoint { double x0; double x1; })getDefaultStartPoint:(long long)a0;
- (void)updateToDefaultPointIfNeeded;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (void)setClickEvent:(id /* block */)a0;
- (void)dealloc;
- (void)resize;

@end
