@class AWEAwemeModel, NSString, AWECommentVCHeaderBarView;

@interface AWECommentVCHeaderBarComponent : UIView <AWECommentVCHeaderBarComponentProtocol>

@property (retain, nonatomic) AWECommentVCHeaderBarView *barView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) unsigned long long barType;
@property (nonatomic) BOOL isFromMaskVC;
@property (nonatomic) BOOL isFromDescriptionPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateUIInVideoDescriptionPanelIfNeeded;
- (void)updateWithAwemeModel:(id)a0 referString:(id)a1 enterSource:(unsigned long long)a2;
- (void)setBarViewStatus;
- (void)setBarViewFromDescriptionPanel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (double)viewHeight;

@end
