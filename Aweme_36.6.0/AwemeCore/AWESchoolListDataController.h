@class NSNumber;

@interface AWESchoolListDataController : AWEListDataController

@property (retain, nonatomic) NSNumber *cursor;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (id)p_invalidParameterError;
- (id)p_requestParameter;
- (void)p_fetchSchoolArrayWithParameter:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
