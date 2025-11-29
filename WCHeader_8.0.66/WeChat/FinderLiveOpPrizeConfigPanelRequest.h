@class BaseRequest, NSString, PrizeConfigItem, FinderBaseRequest;

@interface FinderLiveOpPrizeConfigPanelRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *anchorFinderusername;
@property (nonatomic) unsigned int opType;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) PrizeConfigItem *item;
@property (nonatomic) unsigned int itemId;
@property (nonatomic) unsigned long long objectId;

+ (void)initialize;

@end
