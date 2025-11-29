@class NSString, AWEPageContext;
@protocol AWEAwemeDetailNaviBarCommonContextProtocol;

@interface AWEAwemePlayletInnerFeedNaviBarController : AWEAwemeDetailBaseNaviBarController <AWEAwemeDetailNaviBarControllerProtocol>

@property (readonly, nonatomic) AWEPageContext<AWEAwemeDetailNaviBarCommonContextProtocol> *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)leftContainerArray;
- (id)rightContainerArray;

@end
