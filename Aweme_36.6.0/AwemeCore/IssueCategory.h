@class NSString, NSMutableArray;

@interface IssueCategory : IESLivePBBaseMessage

@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isSelected;
@property (copy, nonatomic) NSString *category;
@property (retain, nonatomic) NSMutableArray *issuesArray;
@property (readonly, nonatomic) unsigned long long issuesArray_Count;

+ (id)descriptor;

@end
