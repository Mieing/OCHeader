@class NSString, NSMutableArray;

@interface UnperformanceDetailData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *questionURL;
@property (copy, nonatomic) NSString *hintTitle;
@property (copy, nonatomic) NSString *hintSubtitle;
@property (copy, nonatomic) NSString *detailPlaceholder;
@property (retain, nonatomic) NSMutableArray *unperformanceItemListArray;
@property (readonly, nonatomic) unsigned long long unperformanceItemListArray_Count;
@property (nonatomic) int banned;
@property (nonatomic) long long bannedFinishedTime;

+ (id)descriptor;

@end
