@class NSString, NSData, NSMutableArray, BaseResponse;

@interface GetGameIndex4FeedsListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *feedsList;
@property (retain, nonatomic) NSData *nextPageInfo;
@property (nonatomic) BOOL hasNext;
@property (retain, nonatomic) NSString *moduleTitle;

+ (void)initialize;

@end
