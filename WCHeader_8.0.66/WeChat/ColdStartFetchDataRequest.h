@class BaseRequest, NSString, NSData, NSMutableArray;

@interface ColdStartFetchDataRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int versionType;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned int fetchType;
@property (retain, nonatomic) NSData *reqData;
@property (retain, nonatomic) NSMutableArray *reqItemList;
@property (nonatomic) unsigned int fetchMode;
@property (retain, nonatomic) NSString *libVersion;
@property (nonatomic) unsigned long long appVersion;

+ (void)initialize;

@end
