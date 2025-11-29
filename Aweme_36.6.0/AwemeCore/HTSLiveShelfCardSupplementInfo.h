@class NSMutableArray;

@interface HTSLiveShelfCardSupplementInfo : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *labelListArray;
@property (readonly, nonatomic) unsigned long long labelListArray_Count;

+ (id)descriptor;

@end
