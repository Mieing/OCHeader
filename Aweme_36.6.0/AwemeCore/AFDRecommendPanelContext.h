@class AWEPageContext, NSString, AWEAwemeModel;
@protocol AWEPlayInteractionContextProtocol;

@interface AFDRecommendPanelContext : NSObject

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *interactionContext;
@property (nonatomic) BOOL enableNewStyle;
@property (copy, nonatomic) NSString *enterMethod;

- (void).cxx_destruct;

@end
