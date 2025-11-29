@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderPoiGroupBuyRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *poiId;
@property (retain, nonatomic) NSString *jumpInfoToGroupbuyByPass;
@property (retain, nonatomic) NSString *lastBuffer;
@property (nonatomic) unsigned int groupBuyTab;

+ (void)initialize;

@end
