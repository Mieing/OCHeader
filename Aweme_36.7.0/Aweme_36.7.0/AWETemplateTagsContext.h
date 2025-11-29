@class AWEPageContext, AWEAwemeModel;
@protocol AWEPlayInteractionContextProtocol;

@interface AWETemplateTagsContext : AWEPageContext

@property (weak, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *pageContext;

- (void).cxx_destruct;

@end
