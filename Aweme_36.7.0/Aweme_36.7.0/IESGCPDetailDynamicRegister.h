@class IESGCPDetailDataSourceFilter;

@interface IESGCPDetailDynamicRegister : NSObject

@property (retain, nonatomic) IESGCPDetailDataSourceFilter *filter;

+ (void)registerLayoutElementClass:(id)a0 viewControlClass:(Class)a1 coverOriginal:(BOOL)a2;
+ (id)keyWithLayoutElementClass:(id)a0;

- (id)viewControlWithLayoutElementClass:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
