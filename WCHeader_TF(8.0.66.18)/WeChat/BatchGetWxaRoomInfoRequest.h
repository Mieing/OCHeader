@class BaseRequest, NSString, NSMutableArray;

@interface BatchGetWxaRoomInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSMutableArray *roomInfoList;
@property (nonatomic) unsigned int getType;
@property (nonatomic) BOOL needEncryptedData;

+ (void)initialize;

@end
