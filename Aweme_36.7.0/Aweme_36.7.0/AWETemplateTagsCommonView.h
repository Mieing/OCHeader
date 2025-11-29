@class AWETemplateStaticLabelInfoModel, NSString, UIStackView;
@protocol AWETemplateTagsTemplateViewDelegate;

@interface AWETemplateTagsCommonView : UIView <AWETemplateTagsTemplateViewProtocol>

@property (retain, nonatomic) AWETemplateStaticLabelInfoModel *model;
@property (retain, nonatomic) UIStackView *stackView;
@property (weak, nonatomic) id<AWETemplateTagsTemplateViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)didClickWithEvent:(id)a0;
- (void)didTapContainerView;
- (void)addGestureForContainer;
- (void)setupMultiContainerView;
- (void)setupSingleContainerView;
- (id)generateElementWithModel:(id)a0;
- (void)addGestureForElement:(id)a0;
- (void)didTapElementView:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
