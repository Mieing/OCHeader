@class NSString, NSMutableArray;

@interface HTSLiveProductComments : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *totalCount;
@property (copy, nonatomic) NSString *jumpTitle;
@property (copy, nonatomic) NSString *jumpSchema;
@property (retain, nonatomic) NSMutableArray *commentsArray;
@property (readonly, nonatomic) unsigned long long commentsArray_Count;

+ (id)descriptor;

@end
