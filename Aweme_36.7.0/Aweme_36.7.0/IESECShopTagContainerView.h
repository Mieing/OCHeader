@class IESECShopTagContainerModel, NSString, IESECShopFont, IESECShopTagListView, UIView, UITapGestureRecognizer;

@interface IESECShopTagContainerView : UIView <IESECShopTagContainerView> {
    UIView *_contentView;
    IESECShopFont *_fontContext;
}

@property (retain, nonatomic) UITapGestureRecognizer *recognizer;
@property (weak, nonatomic) IESECShopTagListView *tagListView;
@property (readonly, nonatomic) IESECShopTagContainerModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)scaleTagContainer:(id)a0 withFactor:(double)a1;
+ (double)calculateContainerWidth:(id)a0 fontContext:(id)a1;

- (void)clickAction;
- (void)updateColorWithPercent:(double)a0;
- (void)reduceContainerWidth:(double)a0;
- (id)constructSubTagView:(id)a0;
- (id)constructText:(id)a0 padding:(id)a1;
- (void)subTagClickAction:(id)a0;
- (void)removeInnerBorder;
- (id)initWithFontContext:(id)a0;
- (void)drawInnerBorderForTagContainer:(double)a0 color:(struct CGColor { } *)a1 scale:(double)a2 radius:(double)a3;
- (void).cxx_destruct;
- (void)reduceWidth:(double)a0;
- (void)setupViews;
- (void)updateWithModel:(id)a0;

@end
