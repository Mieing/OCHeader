@class NSString, NSArray;

@interface ILASearchCategory : NSObject

@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSString *coverId;
@property (copy, nonatomic) NSArray *assetList;

- (id)initWithOriginCategory:(struct shared_ptr<ILASDK::SearchCategory> { struct SearchCategory *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;

@end
