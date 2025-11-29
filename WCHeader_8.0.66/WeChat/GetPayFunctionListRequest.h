@class BaseRequest, NSString, NSMutableArray;

@interface GetPayFunctionListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *telephonyNetIso;
@property (nonatomic) unsigned int ticketCount;
@property (retain, nonatomic) NSMutableArray *ticketList;
@property (retain, nonatomic) NSString *extInfo;
@property (nonatomic) unsigned int lastFuncListExist;

+ (void)initialize;

@end
