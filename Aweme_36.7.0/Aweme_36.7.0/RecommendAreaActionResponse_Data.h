@class NSString, NSMutableArray;

@interface RecommendAreaActionResponse_Data : IESLivePBBaseMessage

@property (nonatomic) int clientAction;
@property (retain, nonatomic) NSMutableArray *areasArray;
@property (readonly, nonatomic) unsigned long long areasArray_Count;
@property (copy, nonatomic) NSString *eventTrackingInfo;

+ (id)descriptor;

@end
