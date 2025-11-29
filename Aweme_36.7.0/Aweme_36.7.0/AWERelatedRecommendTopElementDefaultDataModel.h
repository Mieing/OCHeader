@class AWEAwemeModel, AWEPageContext;
@protocol AWEPlayInteractionContextProtocol;

@interface AWERelatedRecommendTopElementDefaultDataModel : NSObject <AWERelatedRecommendTopElementDataModel>

@property (nonatomic, readonly) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (nonatomic, weak) void /* function */ container;
@property (nonatomic, readonly) AWEAwemeModel *currentModel;

- (id)initWithContext:(id)a0 container:(id)a1 currentModel:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
