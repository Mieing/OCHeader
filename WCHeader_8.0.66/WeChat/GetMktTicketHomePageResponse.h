@class NSString, PageTicketList, PageUnderList, PageTicketJumpList, BaseResponse;

@interface GetMktTicketHomePageResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (nonatomic) unsigned int nextOffset;
@property (nonatomic) unsigned int isAll;
@property (retain, nonatomic) PageTicketJumpList *pageTicketJumpList;
@property (retain, nonatomic) PageTicketList *pageTicketList;
@property (retain, nonatomic) PageTicketList *pageLicenseList;
@property (retain, nonatomic) PageUnderList *pageUnderList;

+ (void)initialize;

@end
