@class NSString, AFDRichAwemeFullPageContext, AFDRichAwemeFullPageCoCreatorContainer, AWEAwemeModel;

@interface AFDRichAwemeFullPageCoCreatorHeaderView : UIView <AWECoCreatorPanelDelegate>

@property (retain, nonatomic) AFDRichAwemeFullPageCoCreatorContainer *coCreatorContainerView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AFDRichAwemeFullPageContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateDataWithModel:(id)a0 context:(id)a1;
- (void)showCoCreatorPostListPanel:(id)a0 fromPage:(id)a1 coCreatorModel:(id)a2;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)hasMask;

@end
