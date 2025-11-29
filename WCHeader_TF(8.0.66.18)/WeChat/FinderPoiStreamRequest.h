@class BaseRequest, NSString, NSData, FinderBaseRequest, FinderClientStatus;

@interface FinderPoiStreamRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) float longitude;
@property (nonatomic) float latitude;
@property (retain, nonatomic) FinderClientStatus *status;
@property (retain, nonatomic) NSString *poi;
@property (nonatomic) unsigned long long fromObjectId;
@property (nonatomic) unsigned int fromType;
@property (nonatomic) unsigned int fromScene;
@property (nonatomic) unsigned int tabId;
@property (retain, nonatomic) NSString *poiName;
@property (retain, nonatomic) NSString *address;
@property (retain, nonatomic) NSString *city;
@property (retain, nonatomic) NSString *country;
@property (nonatomic) unsigned int prefetch;
@property (retain, nonatomic) NSString *buildingId;
@property (retain, nonatomic) NSString *floorName;
@property (nonatomic) unsigned int mediaTabType;
@property (retain, nonatomic) NSString *jumpInfoToPoistreamByPass;

+ (void)initialize;

@end
