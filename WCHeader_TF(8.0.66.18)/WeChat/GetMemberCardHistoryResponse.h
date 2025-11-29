@class NSString, NSMutableArray, BaseResponse;

@interface GetMemberCardHistoryResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned long long retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (nonatomic) BOOL isAll;
@property (nonatomic) unsigned long long nextPageNum;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *getMoreList;
@property (retain, nonatomic) NSMutableArray *items;

+ (void)initialize;

@end
