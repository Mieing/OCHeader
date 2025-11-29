@class NSString, IESECRelationTagListView, IESECRelationTagContainerModel, UIView, UITapGestureRecognizer;

@interface IESECRelationTagContainerView : UIView <IESECRelationTagContainerView> {
    IESECRelationTagContainerModel *_model;
    UIView *_contentView;
}

@property (retain, nonatomic) UITapGestureRecognizer *recognizer;
@property (weak, nonatomic) IESECRelationTagListView *tagListView;
@property (readonly, nonatomic) IESECRelationTagContainerModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)p_constructSubTagView:(id)a0;
+ (id)p_constructText:(id)a0 padding:(id)a1;
+ (id)p_constructImage:(id)a0;
+ (id)p_constructDividerLine:(id)a0;

- (void)clickAction;
- (void)updateColorWithPercent:(double)a0;
- (id)initWithModel:(id)a0 tagListView:(id)a1;
- (void)updateColorWithModel:(id)a0 atPercent:(double)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupViews;
- (void)updateWithModel:(id)a0;

@end
