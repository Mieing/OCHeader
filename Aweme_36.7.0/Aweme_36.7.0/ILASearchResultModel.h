@class NSArray, NSDictionary;

@interface ILASearchResultModel : NSObject

@property (copy, nonatomic) NSArray *assetIds;
@property (retain, nonatomic) NSDictionary *resultMapping;

- (id)initWithOriginResult:(struct shared_ptr<ILASDK::SearchResult> { struct SearchResult *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;

@end
