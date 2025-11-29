@class NSString, NSMutableArray;

@interface PKRecordListArea : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *recordListArray;
@property (readonly, nonatomic) unsigned long long recordListArray_Count;

+ (id)descriptor;

@end
