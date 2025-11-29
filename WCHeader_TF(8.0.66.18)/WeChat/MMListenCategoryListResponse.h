@class NSData, NSMutableArray, BaseResponse;

@interface MMListenCategoryListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *results;
@property (retain, nonatomic) NSMutableArray *deletedCategoryIds;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) unsigned long long sessionMaxSeq;
@property (retain, nonatomic) NSData *sessionBuffer;

+ (void)initialize;

@end
