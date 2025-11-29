@class NSMutableArray;

@interface PstnNotify : WXPBGeneratedMessage

@property (nonatomic) unsigned int roomId;
@property (nonatomic) unsigned long long roomKey;
@property (retain, nonatomic) NSMutableArray *userStatusList;
@property (nonatomic) unsigned int dtmfPayloadType;

+ (void)initialize;

@end
