@class NSString, UDRGetResourceRespResourceItem;

@interface UDRGetResourceRespProjectItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *projectId;
@property (nonatomic) int ret;
@property (retain, nonatomic) UDRGetResourceRespResourceItem *respResourceItem;
@property (nonatomic) unsigned int projectBlockTime;

+ (void)initialize;

@end
