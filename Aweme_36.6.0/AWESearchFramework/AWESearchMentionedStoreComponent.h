@class NSString, AWEGeneralSearchVideoCardModel, UIView, AWESearchMentionedStoreView;

@interface AWESearchMentionedStoreComponent : AWESearchComponent <AWESearchMentionedStoreComponentProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWESearchMentionedStoreView *mentionedStoreView;
@property (retain, nonatomic) AWEGeneralSearchVideoCardModel *bindedModel;
@property (nonatomic) BOOL currentModelFromSetupModelOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })componentSizeForModel:(id)a0 width:(double)a1;

- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)componentViewLayoutSubviews;
- (void)setModelOnly:(id)a0;
- (id)p_context;
- (void)p_updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (id)componentView;
- (void)setupUI;
- (id)router;

@end
