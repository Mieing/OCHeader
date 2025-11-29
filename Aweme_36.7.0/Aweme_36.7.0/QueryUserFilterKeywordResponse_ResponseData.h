@class NSMutableArray;

@interface QueryUserFilterKeywordResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *keywordsArray;
@property (readonly, nonatomic) unsigned long long keywordsArray_Count;
@property (nonatomic) long long upperLimit;

+ (id)descriptor;

@end
