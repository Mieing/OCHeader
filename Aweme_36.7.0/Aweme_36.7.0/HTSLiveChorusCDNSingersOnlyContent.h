@class NSMutableArray;

@interface HTSLiveChorusCDNSingersOnlyContent : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *cdnSingersArray;
@property (readonly, nonatomic) unsigned long long cdnSingersArray_Count;

+ (id)descriptor;

@end
