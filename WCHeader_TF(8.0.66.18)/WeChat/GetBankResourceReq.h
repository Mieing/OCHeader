@class NSString, NSMutableArray, ActionLocation;

@interface GetBankResourceReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *banktypelist;
@property (retain, nonatomic) ActionLocation *actionLocation;
@property (retain, nonatomic) NSString *jsapiReqkey;

+ (void)initialize;

@end
