@class FinderLbsLifeStreamLocation, BaseRequest, NSData, FinderBaseRequest, FinderClientStatus, NSMutableArray;

@interface FinderLbsLifeStreamRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) FinderLbsLifeStreamLocation *location;
@property (retain, nonatomic) FinderClientStatus *status;
@property (retain, nonatomic) NSMutableArray *labelFilterList;
@property (nonatomic) unsigned int actionFlag;
@property (retain, nonatomic) FinderLbsLifeStreamLocation *accurateLocation;
@property (retain, nonatomic) NSData *tabTipsByPassInfo;

+ (void)initialize;

@end
