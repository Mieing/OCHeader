@class NSString, NSMutableArray;

@interface HTSLiveRelaxProductInfo : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *productListArray;
@property (readonly, nonatomic) unsigned long long productListArray_Count;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *detailSchema;

+ (id)descriptor;

@end
