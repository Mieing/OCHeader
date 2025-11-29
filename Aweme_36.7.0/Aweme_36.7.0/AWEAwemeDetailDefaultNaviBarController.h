@class NSString, AWEPageContext;
@protocol AWEAwemeDetailNaviBarCommonContextProtocol;

@interface AWEAwemeDetailDefaultNaviBarController : AWEAwemeDetailBaseNaviBarController <AWEAwemeDetailNaviBarControllerProtocol>

@property (readonly, nonatomic) AWEPageContext<AWEAwemeDetailNaviBarCommonContextProtocol> *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (Class)aAWEBackgroundPlayAdapterClass;

- (id)leftContainerArray;
- (id)rightContainerArray;
- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (id)aAWEBackgroundPlayAdapter;

@end
