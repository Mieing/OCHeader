@class BaseRequest, NSString, NSMutableArray;

@interface CheckTmplVerReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *netType;
@property (retain, nonatomic) NSMutableArray *typeInfoList;

+ (void)initialize;

@end
