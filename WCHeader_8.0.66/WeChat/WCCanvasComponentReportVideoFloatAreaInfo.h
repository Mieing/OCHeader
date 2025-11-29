@class WCCanvasComponentReportVideoFloatAreaButtonInfo;

@interface WCCanvasComponentReportVideoFloatAreaInfo : MMObject

@property (retain, nonatomic) WCCanvasComponentReportVideoFloatAreaButtonInfo *buttonInfo;
@property (nonatomic) unsigned int exposureCount;
@property (nonatomic) unsigned long long stayTime;
@property (nonatomic) unsigned int clickCount;

- (id)init;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;

@end
