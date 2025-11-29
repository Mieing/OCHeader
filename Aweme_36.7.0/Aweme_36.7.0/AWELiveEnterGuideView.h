@class HTSLivePreviewExposeData_PreviewPromotion, AWELiveEnterGuideQuickCommentView;

@interface AWELiveEnterGuideView : UIView

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) HTSLivePreviewExposeData_PreviewPromotion *previewPromotion;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastFrame;
@property (retain, nonatomic) AWELiveEnterGuideQuickCommentView *quickCommentView;
@property (copy, nonatomic) id /* block */ inputBoxClickedBlock;
@property (copy, nonatomic) id /* block */ likeButtonClickedBlock;
@property (copy, nonatomic) id /* block */ quickCommentClickedBlock;

- (id)initWithType:(unsigned long long)a0 previewPromotion:(id)a1;
- (void)setupUIQuickCommentStyle;
- (void)creatQuickCommentView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;

@end
