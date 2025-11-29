@class NSString, NSMutableArray, BaseResponse;

@interface MMListenIdListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *results;
@property (retain, nonatomic) NSString *categoryId;
@property (retain, nonatomic) NSString *updateMd5;
@property (nonatomic) unsigned long long expireTimeS;
@property (nonatomic) int listOrder;

+ (void)initialize;

@end
