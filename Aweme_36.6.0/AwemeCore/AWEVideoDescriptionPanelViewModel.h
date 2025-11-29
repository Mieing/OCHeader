@class AWEElementContainer, AWEAwemeModel;
@protocol AWEAwemePlayInteractionRouterProtocol;

@interface AWEVideoDescriptionPanelViewModel : NSObject

@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) AWEElementContainer *leftContainer;
@property (retain, nonatomic) id<AWEAwemePlayInteractionRouterProtocol> router;

+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;

- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (void)updateWithModel:(id)a0 leftContainer:(id)a1;
- (void)onAuthorLabelClicked:(id)a0 clickType:(long long)a1;
- (id)videoDescription;
- (void)trackAuthorLabelClicked:(long long)a0;
- (void).cxx_destruct;

@end
