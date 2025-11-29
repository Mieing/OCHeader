@class NSString, NSMutableArray;

@interface UnityVersionInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *publishTime;
@property (copy, nonatomic) NSString *iterateDescription;
@property (copy, nonatomic) NSString *detailDescription;
@property (retain, nonatomic) NSMutableArray *historyRecordsArray;
@property (readonly, nonatomic) unsigned long long historyRecordsArray_Count;

+ (id)descriptor;

@end
