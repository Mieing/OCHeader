@class NSMutableArray, BaseResponse;

@interface GetColikeBlockListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *items;
@property (nonatomic) BOOL continueFlag;
@property (nonatomic) unsigned int total;
@property (nonatomic) unsigned int updateFlag;
@property (nonatomic) unsigned long long version;
@property (nonatomic) unsigned int offset;

+ (void)initialize;

@end
