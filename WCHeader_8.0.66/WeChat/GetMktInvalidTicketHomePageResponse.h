@class NSString, PageTicketList, BaseResponse;

@interface GetMktInvalidTicketHomePageResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (nonatomic) unsigned int nextOffset;
@property (nonatomic) unsigned int isAll;
@property (retain, nonatomic) PageTicketList *pageInvalidTicketList;
@property (nonatomic) unsigned int isShowClearBtn;

+ (void)initialize;

@end
