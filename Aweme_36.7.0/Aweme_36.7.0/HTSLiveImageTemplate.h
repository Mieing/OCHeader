@class NSMutableArray, NSMutableDictionary;

@interface HTSLiveImageTemplate : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *domainListArray;
@property (readonly, nonatomic) unsigned long long domainListArray_Count;
@property (retain, nonatomic) NSMutableDictionary *defaultParams;
@property (readonly, nonatomic) unsigned long long defaultParams_Count;
@property (retain, nonatomic) NSMutableArray *supportCustomParamsArray;
@property (readonly, nonatomic) unsigned long long supportCustomParamsArray_Count;

+ (id)descriptor;

@end
