@class NSString, NSDictionary, UIViewController;
@protocol AWESearchResultControllerProxyProtocol, CachalotRenderPipelineComponentViewModel;

@interface AWESearchCachalotResultContext : SearchCachalotContext

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *searchKeyword;
@property (copy, nonatomic) NSDictionary *logPb;
@property (nonatomic) long long photoSearchResultPageTheme;
@property (copy, nonatomic) NSString *ecomSceneId;
@property (copy, nonatomic) NSString *searchID;
@property (weak, nonatomic) UIViewController<AWESearchResultControllerProxyProtocol> *controllerProxy;
@property (retain, nonatomic) id<CachalotRenderPipelineComponentViewModel> savedViewModel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } webRect;
@property (copy, nonatomic) NSString *strSearchType;
@property (nonatomic) BOOL isUpdateFromPipeline;
@property (copy, nonatomic) NSString *queryTags;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
