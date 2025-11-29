@class NSString, UIImageView, WCFinderFeedContentVM, UILabel, UIView, MMLiveIconButton;
@protocol WCFinderPanelRingtoneBubbleViewDelegate;

@interface WCFinderPanelRingtoneBubbleView : UIView <VideRingModifyExt, WCFinderFeedContentVMExt>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *musicImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) MMLiveIconButton *actionButton;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (weak, nonatomic) id<WCFinderPanelRingtoneBubbleViewDelegate> delegate;
@property (nonatomic) double textAreaMaxWidth;
@property (nonatomic) double maxWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithContentVM:(id)a0;
- (void)onClickActionButton;
- (void)onGlobalRingModified:(id)a0 opType:(unsigned long long)a1;
- (void)onFeedOriginalSoundInfoChanged:(id)a0;
- (void).cxx_destruct;

@end
