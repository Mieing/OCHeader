@class BaseRequest, NSString, NSMutableArray;

@interface ModTextStatusReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *textStatusExtInfo;
@property (retain, nonatomic) NSMutableArray *blacklistUsernames;
@property (retain, nonatomic) NSString *textStatusId;
@property (nonatomic) unsigned long long modStatusOption;
@property (retain, nonatomic) NSString *privateInfo;

+ (void)initialize;

@end
