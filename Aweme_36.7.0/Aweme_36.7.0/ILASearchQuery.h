@class NSString, NSArray, ILASearchFilter;

@interface ILASearchQuery : NSObject

@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSArray *keywords;
@property (copy, nonatomic) NSString *keyTagsJsonString;
@property (nonatomic) int maxCategoryCount;
@property (retain, nonatomic) ILASearchFilter *filter;
@property (nonatomic) int type;
@property (nonatomic) int enterFrom;
@property (nonatomic) unsigned long long textParser;
@property (nonatomic) int autoSearchCount;

- (struct shared_ptr<ILASDK::SearchQuery> { struct SearchQuery *x0; struct __shared_weak_count *x1; })targetQuery;
- (void).cxx_destruct;

@end
