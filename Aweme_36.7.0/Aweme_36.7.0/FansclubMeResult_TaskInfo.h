@class NSString, NSMutableArray;

@interface FansclubMeResult_TaskInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) NSMutableArray *itemsArray;
@property (readonly, nonatomic) unsigned long long itemsArray_Count;
@property (nonatomic) long long buffLevel;

+ (id)descriptor;

@end
