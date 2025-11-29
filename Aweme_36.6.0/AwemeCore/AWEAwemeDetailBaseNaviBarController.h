@class NSArray, NSString, AWEPageContext;
@protocol AWEAwemeDetailNaviBarCommonContextProtocol;

@interface AWEAwemeDetailBaseNaviBarController : NSObject <AWEAwemeDetailNaviBarControllerProtocol>

@property (retain, nonatomic) AWEPageContext<AWEAwemeDetailNaviBarCommonContextProtocol> *context;
@property (copy, nonatomic) NSArray *middleContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)leftContainerArray;
- (id)middleContainerArray;
- (id)rightContainerArray;
- (void)updateMiddleContainerWithArray:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
