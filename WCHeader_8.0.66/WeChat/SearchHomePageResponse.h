@class NSMutableArray, BaseResponse;

@interface SearchHomePageResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned long long businessType;
@property (retain, nonatomic) NSMutableArray *contentList;

+ (void)initialize;

@end
