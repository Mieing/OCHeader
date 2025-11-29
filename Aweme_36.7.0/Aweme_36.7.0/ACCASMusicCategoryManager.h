@class NSArray;

@interface ACCASMusicCategoryManager : NSObject

@property (copy, nonatomic) NSArray *dataList;
@property (nonatomic) BOOL isCommerce;
@property (nonatomic) long long recordMode;
@property (nonatomic) double videoDuration;

- (void)fetchDataWithCompletion:(id /* block */)a0;
- (id)categoryModel:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)numberOfCategories;

@end
