@class NSString, IESECShopLayoutBaseContainer;
@protocol IESECShopPageContextV2;

@interface IESECShopLayoutManager : NSObject <IESECShopLayoutManager> {
    id<IESECShopPageContextV2> _pageContext;
}

@property (readonly, nonatomic) IESECShopLayoutBaseContainer *mainContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)cleanMainContainerSelf:(id)a0;
+ (void)loadMainContainer:(id)a0 withLayoutContainer:(id)a1;

- (id)viewForType:(id)a0;
- (void)removeViewType:(id)a0;
- (id)initWithPageContext:(id)a0;
- (void)bindView:(id)a0 forViewType:(id)a1;
- (void)bindView:(id)a0 forViewType:(id)a1 constraintMaker:(id /* block */)a2;
- (id)parentContainerForType:(id)a0;
- (id)containerForType:(id)a0;
- (void)loadMainContainer;
- (void)loadMainContainerWithHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
