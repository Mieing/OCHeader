@class UIColor, UIStackView, NSString, AWETemplateStaticLabelInfoModel;
@protocol AWETemplateTagsTemplateViewDelegate;

@interface AWETemplateTagsBuiltInBaseView : UIView <AWETemplateTagsTemplateViewProtocol>

@property (retain, nonatomic) AWETemplateStaticLabelInfoModel *model;
@property (retain, nonatomic) UIStackView *stackView;
@property (nonatomic) double containerHeight;
@property (retain, nonatomic) UIColor *containerBGColor;
@property (nonatomic) double containerLeftSpacing;
@property (nonatomic) double containerRightSpacing;
@property (nonatomic) double containerElementSpacing;
@property (weak, nonatomic) id<AWETemplateTagsTemplateViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didClickWithEvent:(id)a0;
- (void)didTapContainerView;
- (void)setupProperty;
- (void)addGestureForContainer;
- (id)elementViews:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
