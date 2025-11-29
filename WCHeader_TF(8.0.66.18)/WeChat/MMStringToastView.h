@class VoIPToast, MMTimer, UIImageView, NSObject, UILabel, NSMutableArray, UIView;
@protocol MMStringToastViewDelegate;

@interface MMStringToastView : MMUIView

@property (retain, nonatomic) NSMutableArray *m_remainStringList;
@property (retain, nonatomic) UILabel *contentsLabel;
@property (retain, nonatomic) UIImageView *m_backgroundImageView;
@property (retain, nonatomic) VoIPToast *curToast;
@property (retain, nonatomic) VoIPToast *topTips;
@property (nonatomic) BOOL noNeedTips;
@property (retain, nonatomic) MMTimer *m_actingTimer;
@property (nonatomic) unsigned int m_dotCountIncresement;
@property (retain, nonatomic) UIImageView *netStatusArrowIconView;
@property (nonatomic) BOOL isIndividualWindow;
@property (retain, nonatomic) UIView *backgroundView;
@property (weak, nonatomic) NSObject<MMStringToastViewDelegate> *delegate;
@property (nonatomic) BOOL isUsingMPUI;

- (void)layoutSubviews;
- (void)dealloc;
- (void)clearActingTimer;
- (id)initWithFrameAndBackground:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isUsingMPUI:(BOOL)a1;
- (void)initViewIfIsUsingMPUI:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isUsingMPUI:(BOOL)a1;
- (void)addScrollingString:(id)a0 withDisplayTime:(double)a1;
- (void)addScrollingString:(id)a0 withDisplayTime:(double)a1 type:(unsigned long long)a2;
- (void)addScrollingString:(id)a0 withDisplayTime:(double)a1 type:(unsigned long long)a2 isDiff:(BOOL)a3;
- (void)setTopTipsNil;
- (void)clearCurrentString;
- (void)clearAllString;
- (void)hideToast;
- (void)timerFunction;
- (void)checkAfterDelay;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getStringRect:(id)a0 WithWidth:(double)a1 WithHeight:(double)a2 type:(unsigned long long)a3;
- (void)autoUpdateString;
- (void)onTapNetStatusTipView;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)content;
- (void)showScreenTips;
- (void)clearScreenTips;
- (BOOL)isInvalid;
- (void).cxx_destruct;

@end
