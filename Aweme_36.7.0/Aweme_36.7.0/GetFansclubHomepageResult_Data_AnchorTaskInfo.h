@class NSString, NSMutableArray;

@interface GetFansclubHomepageResult_Data_AnchorTaskInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) NSMutableArray *itemsArray;
@property (readonly, nonatomic) unsigned long long itemsArray_Count;

+ (id)descriptor;

@end
