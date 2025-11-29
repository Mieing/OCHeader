@class NSNumber, NSString;

@interface AWESchoolSearchDataController : AWEListDataController <AWESchoolSearchDataControllerProtocol>

@property (retain, nonatomic) NSNumber *cursor;
@property (copy, nonatomic) NSString *keywords;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (id)p_invalidParameterError;
- (id)p_requestParameter;
- (void)p_fetchSchoolArrayWithParameter:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
