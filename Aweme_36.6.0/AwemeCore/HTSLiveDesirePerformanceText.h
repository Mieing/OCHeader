@class NSString, NSMutableArray;

@interface HTSLiveDesirePerformanceText : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *description_p;
@property (retain, nonatomic) NSMutableArray *picturesArray;
@property (readonly, nonatomic) unsigned long long picturesArray_Count;

+ (id)descriptor;

@end
