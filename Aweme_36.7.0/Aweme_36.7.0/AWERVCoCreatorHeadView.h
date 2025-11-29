@class NSString, AWEAwemeModel, UIView, AWERVDetailPageContext;
@protocol AFDRichAwemeFullPageCoCreatorContainerProtocol;

@interface AWERVCoCreatorHeadView : UIView <AWEUserMessage, AWECoCreatorPanelDelegate>

@property (retain, nonatomic) UIView<AFDRichAwemeFullPageCoCreatorContainerProtocol> *coCreatorContainerView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWERVDetailPageContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)updateDataWithModel:(id)a0 context:(id)a1;
- (void)showCoCreatorPostListPanel:(id)a0 fromPage:(id)a1 coCreatorModel:(id)a2;
- (void)updateFollowStatusWithUser:(id)a0 status:(long long)a1;
- (void)setCoCreatorContainerLogExtraDict;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)dealloc;
- (BOOL)hasMask;

@end
