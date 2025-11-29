@class BaseRequest, NSString, LbsLocation, SKBuiltinBuffer_t;

@interface GetLbsLifeListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int opcode;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) SKBuiltinBuffer_t *buff;
@property (retain, nonatomic) LbsLocation *loc;
@property (retain, nonatomic) NSString *keyword;
@property (nonatomic) unsigned int entryTime;
@property (nonatomic) unsigned int isAutoQuery;
@property (nonatomic) unsigned int indoorSwitch;
@property (nonatomic) unsigned int searchAll;

+ (void)initialize;

@end
