@class NSString;

@interface WCCanvasComponentReportBasicInfo : MMObject

@property (retain, nonatomic) NSString *cid;
@property (nonatomic) unsigned int exposureCount;
@property (nonatomic) unsigned long long stayTime;

- (id)initWithCid:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;

@end
