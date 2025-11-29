@class NSString, NSMutableArray;

@interface HTSLiveRelaxUrgeLiveData : IESLivePBBaseMessage

@property (nonatomic) int type;
@property (nonatomic) int audienceUrgeType;
@property (retain, nonatomic) NSMutableArray *audienceIconArray;
@property (readonly, nonatomic) unsigned long long audienceIconArray_Count;
@property (copy, nonatomic) NSString *title;

+ (id)descriptor;

@end
