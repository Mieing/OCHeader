@class NSMutableArray, BaseResponse;

@interface FinderLiveBatchGetMicContactResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *micContactList;
@property (retain, nonatomic) NSMutableArray *items;

+ (void)initialize;

@end
