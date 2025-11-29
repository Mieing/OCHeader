@class NSString, NSMutableArray, TabExtra;

@interface TabResponse : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *gdLabel;
@property (retain, nonatomic) NSMutableArray *dataArray;
@property (readonly, nonatomic) unsigned long long dataArray_Count;
@property (retain, nonatomic) TabExtra *extra;
@property (nonatomic) BOOL hasExtra;

+ (id)descriptor;

- (void)setDataArray:(id)a0;
- (id)buildSubTabModels;
- (BOOL)isSubTabVaild;

@end
