@class AWEGeneralSearchVideoCardModel, AWESearchLifePositiveCommentView, NSString;

@interface AWESearchLifePositiveCommentComponent : AWESearchComponent <AWESearchLifePositiveCommentComponentProtocol>

@property (retain, nonatomic) AWESearchLifePositiveCommentView *contentView;
@property (retain, nonatomic) AWEGeneralSearchVideoCardModel *bindedModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })componentSizeForModel:(id)a0 width:(double)a1;

- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)setModelOnly:(id)a0;
- (id)descProvider;
- (void)p_updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void).cxx_destruct;
- (id)componentView;

@end
