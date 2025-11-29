@class WCCanvasComponentReportUrlInfo;

@interface WCCanvasComponentReportPanoramaInfo : WCCanvasComponentReportBasicInfo

@property (nonatomic) unsigned int swipeCount;
@property (retain, nonatomic) WCCanvasComponentReportUrlInfo *imgUrlInfo;

- (id)dictionaryRepresentation;
- (void).cxx_destruct;

@end
