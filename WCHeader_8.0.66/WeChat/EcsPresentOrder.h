@class EcsPresentOrderInfo, EcsWishInfo, NSString, NSMutableArray, EcsClientInfo;

@interface EcsPresentOrder : WXPBGeneratedMessage

@property (nonatomic) unsigned long long presentOrderId;
@property (nonatomic) unsigned long long useruin;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSMutableArray *subOrders;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned int updateTime;
@property (retain, nonatomic) EcsPresentOrderInfo *orderInfo;
@property (nonatomic) unsigned int event;
@property (retain, nonatomic) EcsWishInfo *wishInfo;
@property (retain, nonatomic) EcsClientInfo *giverClientInfo;
@property (nonatomic) unsigned int delStatus;
@property (nonatomic) unsigned int source;
@property (retain, nonatomic) NSString *openPresentOrderId;

+ (void)initialize;

@end
