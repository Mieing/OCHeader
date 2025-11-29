@class NSArray;
@protocol CJPayPrefetchRequestModel;

@interface CJPayPrefetchConfig : JSONModel

@property (copy, nonatomic) NSArray<CJPayPrefetchRequestModel> *prefetchDatas;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (id)getRequestModelByUrl:(id)a0;
- (void).cxx_destruct;

@end
