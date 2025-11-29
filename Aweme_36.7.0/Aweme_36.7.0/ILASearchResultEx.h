@class NSArray;

@interface ILASearchResultEx : NSObject

@property (copy, nonatomic) NSArray *assetList;
@property (copy, nonatomic) NSArray *recommendKeywords;
@property (copy, nonatomic) NSArray *categories;

- (id)initWithOriginResult:(struct shared_ptr<ILASDK::SearchResultEx> { struct SearchResultEx *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;

@end
