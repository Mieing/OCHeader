@class BaseRequest, NSString, ExptAppDeviceType, NSMutableArray;

@interface GetExptAppConfigRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int lastGetSvrSecond;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) ExptAppDeviceType *exptAppDeviceType;
@property (retain, nonatomic) NSMutableArray *localExptList;
@property (nonatomic) unsigned int isIncrement;
@property (retain, nonatomic) NSString *globalSequence;

+ (void)initialize;

@end
